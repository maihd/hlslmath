#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>

static void RunTests(const char* directory, const char* watchDirectory, const char* compiler);

int main(const int argc, const char* const argv[])
{
	const char* compiler = "gcc";
	if (argc > 1)
	{
		compiler = argv[1];
	}

	const char* buildDirectory = "";

	const char* watchDirectories[] = { "cases", "../src" };
	enum { watchDirectoryCount = sizeof(watchDirectories) / sizeof(watchDirectories[0]) };

    DWORD dwWaitStatus;
	HANDLE dwChangeHandles[watchDirectoryCount];

	for (int i = 0; i < watchDirectoryCount; i++)
	{
		// Watch the directory for file creation and deletion. 
		dwChangeHandles[i] = FindFirstChangeNotificationA(
			watchDirectories[i],					// directory to watch 
			TRUE,								// watch subtree 
			FILE_NOTIFY_CHANGE_FILE_NAME		
			| FILE_NOTIFY_CHANGE_DIR_NAME
			| FILE_NOTIFY_CHANGE_LAST_WRITE); 	// watch file name changes 
			
		// Make a validation check on our handles.
		if (dwChangeHandles[i] == INVALID_HANDLE_VALUE || dwChangeHandles[i] == NULL)
		{
			printf("ERROR: FindFirstChangeNotification function failed.\n");
			return -1;
		}
	}

	// Change notification is set. Now wait on both notification 
	// handles and refresh accordingly. 
	while (1)
	{
		dwWaitStatus = WaitForMultipleObjects(watchDirectoryCount, dwChangeHandles, FALSE, INFINITE);
		if (dwWaitStatus >= WAIT_OBJECT_0 && dwWaitStatus < WAIT_OBJECT_0 + watchDirectoryCount)
		{
			int index = (int)(dwWaitStatus - WAIT_OBJECT_0);
			RunTests(buildDirectory, watchDirectories[index], compiler);

			Sleep(1000);
			if (FindNextChangeNotification(dwChangeHandles[index]) == FALSE)
			{
				printf("ERROR: FindNextChangeNotification function failed.\n");
				return -1;
			}
		}
		else if (dwWaitStatus == WAIT_TIMEOUT)
		{
			// A timeout occurred, this would happen if some value other 
			// than INFINITE is used in the Wait call and no changes occur.
			// In a single-threaded environment you might not want an
			// INFINITE wait.
			//printf("No changes in the timeout period.\n");
		}
		else
		{
			printf("[%s] ERROR: Unhandled dwWaitStatus.\n", argv[0]);
			return -1;
		}
	}

	for (int i = 0; i < watchDirectoryCount; i++)
	{
		CloseHandle(dwChangeHandles[i]);
		dwChangeHandles[i] = 0;
	}

    return 0;
}

void RunTests(const char* buildDirectory, const char* watchDirectory, const char* compiler)
{
	char buildInput[1024] = "";
	if (strcmp(watchDirectory, "../src") == 0)
	{
		snprintf(buildInput, sizeof(buildInput), "RUN_ALLS=true");
	}

	char buildCommand[1024];
	snprintf(buildCommand, sizeof(buildCommand), "make CC=%s %s --quiet", compiler, buildInput);

    char command[1024];
	if (strlen(buildDirectory) > 0)
	{
    	snprintf(command, sizeof(command), "cd %s && %s", buildDirectory, buildCommand);
	}
	else
	{
		snprintf(command, sizeof(command), "%s", buildCommand);
	}

	system(command);
}
