CC=gcc

DST=build
SRC=build.c

ifeq ($(OS),Windows_NT)
	DST=build.exe
endif

build: $(SRC)
	$(CC) -o $(DST) $(SRC)

clang: CC=clang
clang: build

clean: 
	rm -f *.o
	rm -f $(DST)