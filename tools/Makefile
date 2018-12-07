CC=gcc

DST=build
SRC=build.c

ifeq ($(OS),Windows_NT)
	DST=build.exe
endif

all: build

build:
	$(CC) -o $(DST) $(SRC)

clang: CC=clang
clang: build

clean: 
	rm -f *.o
	rm -f $(DST)