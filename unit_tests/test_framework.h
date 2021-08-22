#pragma once

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

#ifndef HLSLMATH_H // Shut the mouth of VSCode
#define HLSLMATH_H "./hlslmath_prebuild.h"
#endif

#include HLSLMATH_H

// ------------------------------------------------------------------------------------------
// Unit tests API
// ------------------------------------------------------------------------------------------

typedef void UnitTestFunc();

struct UnitTest
{
    const char*    const    name;
    UnitTestFunc*  const    func;
    UnitTest*      const    next;

                            UnitTest(const char* name, UnitTestFunc* func);

    static int              TestFailed(const char* func, const int line);
};

#ifndef CONCAT
#define CONCAT(A, B)        CONCAT_IMPL(A, B)
#define CONCAT_IMPL(A, B)   A ## B
#endif

#ifndef SYMBOL
#define SYMBOL(PREFIX)      CONCAT(PREFIX, __LINE__)
#endif

#define DEFINE_UNIT_TEST(name)                                      \
    static void SYMBOL(UnitTestFunc)();                             \
    static UnitTest SYMBOL(UNIT_TEST)(name, SYMBOL(UnitTestFunc));  \
    static void SYMBOL(UnitTestFunc)()

#if defined(_MSC_VER) && !defined(NDEBUG)
extern "C" __declspec(dllimport) int __stdcall IsDebuggerPresent(void);
#define TEST_FAILED()                                                               \
    do {                                                                            \
        const int exitCode = UnitTest::TestFailed(__FILE__, __LINE__);              \
        if (IsDebuggerPresent()) __debugbreak();                                    \
        exit(exitCode);                                                             \
    } while (0)
#else
#define TEST_FAILED()                                                               \
    do {                                                                            \
        const int exitCode = UnitTest::TestFailed(__FILE__, __LINE__);              \
        exit(exitCode);                                                             \
    } while (0)
#endif

#define TEST(condition, message, ...)                                           \
    do {                                                                        \
        if (!(condition))                                                       \
        {                                                                       \
            TEST_FAILED();                                                      \
        }                                                                       \
    } while (false)

#define TEST_EQUAL(actual, expected)                                            \
    do {                                                                        \
        if ((actual) != (expected))                                             \
        {                                                                       \
            TEST_FAILED();                                                      \
        }                                                                       \
    } while (false)

#define TEST_NOT_EQUAL(actual, expected)                                        \
    do {                                                                        \
        if ((actual) == (expected))                                             \
        {                                                                       \
            TEST_FAILED();                                                      \
        }                                                                       \
    } while (false)

// ------------------------------------------------------------------------------------------
// Define test runner
// ------------------------------------------------------------------------------------------

#ifdef RUN_UNIT_TESTS
#include <stdio.h>
#include <stdlib.h>

#if defined(_WIN32)
#include <Windows.h>
#pragma comment(lib, "User32.lib")
#endif

static UnitTest*    gUnitTests          = nullptr;
static int          gUnitTestsCount     = 0;
static int          gUnitTestsRunCount  = 0;
static int          gUnitTestsExitCode  = 0;
static const char*  gUnitTestsLogHeader = "Box2D-C99";

// `defined` operator on expression, the implementation is hard to understand
#define IS_DEFINED(macro)               IS_DEFINED_1(macro)
#define MACRO_TEST_1                    ,
#define IS_DEFINED_1(value)             IS_DEFINED_2(MACRO_TEST_##value)
#define IS_DEFINED_2(comma)             IS_DEFINED_3(comma 1, 0)
#define IS_DEFINED_3(_, v, ...)         v

#ifndef UNIT_TEST_GOTO_FILE_COMMAND
#define UNIT_TEST_GOTO_FILE_COMMAND     "code --goto %s:%d"
#endif

static void NotifyProgammer(const char* title, const char* message);

UnitTest::UnitTest(const char* name, UnitTestFunc* func)
    : name(name)
    , func(func)
    , next(gUnitTests)
{
    gUnitTests = this;
    gUnitTestsCount++;
}

int UnitTest::TestFailed(const char* file, const int line)
{
    char message[4096];
    snprintf(message, sizeof(message), 
        "Failed after run %d unit tests!!!\nAt %s:%d\n", gUnitTestsRunCount, file, line
    );

    printf("%s %s", gUnitTestsLogHeader, message);
    
    if (!IS_DEFINED(CONTINUE_UNIT_TEST_ON_FAIL))
    {
        char notifyMessage[4096];
        snprintf(notifyMessage, sizeof(notifyMessage), "%s\nPress OK to exit!!!", message);

        bool gotoSource = false;
        #if defined(_MSC_VER) && !defined(NDEBUG)
        if (IsDebuggerPresent())
        {
            gotoSource = false;
            snprintf(notifyMessage, sizeof(notifyMessage), "%s\nPress OK to start debug!!!", message);
        }
        else
        {
            gotoSource = true;
            snprintf(notifyMessage, sizeof(notifyMessage), "%s\nPress OK to open source file!!!", message);
        }
        #endif

        gUnitTestsExitCode = -1;
        NotifyProgammer("HLSLMath's UnitTests", notifyMessage);
        
        if (gotoSource)
        {
            char command[1024];
            snprintf(command, sizeof(command), UNIT_TEST_GOTO_FILE_COMMAND, file, line);

            system(command);
        }
    }

    return gUnitTestsExitCode;
}

int main(const int argc, const char* argv[])
{
    if (argc > 1)
    {
        gUnitTestsLogHeader = argv[1];
    }

    gUnitTestsRunCount = 0;
    for (UnitTest* unitTest = gUnitTests; unitTest != nullptr; unitTest = unitTest->next)
    {
        unitTest->func();
        gUnitTestsRunCount++;
    }

    printf("%s Run all %d unit tests successfully!!!\n", gUnitTestsLogHeader, gUnitTestsRunCount);
    return gUnitTestsExitCode;
}

void NotifyProgammer(const char* title, const char* message)
{
    #if defined(_WIN32)
    MessageBeep(MIM_ERROR);
    MessageBoxA(NULL, message, title, MB_OK);
    #else
    printf("%s", message);
    fgetc(stdin);
    #endif
}
#endif
