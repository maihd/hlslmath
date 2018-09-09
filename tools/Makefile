DST=build
SRC=build.c

ifeq ($(OS),Windows_NT)
	DST=build.exe
endif

all: gcc

gcc:
	gcc -o $(DST) $(SRC)

clang:
	clang -o $(DST) $(SRC)
