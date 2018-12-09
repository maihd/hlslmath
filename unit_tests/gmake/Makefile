CC=gcc
CFLAGS=-Wall
LFLAGS=-lm

SRC=$(wildcard ../*.cc)
EXE=$(patsubst %.cc,%.exe,$(SRC))

.PHONY: clean all

%.exe: %.cc 
	@echo "Execute unit test for '$(patsubst ../%.cc,%,$<)'"
	@echo "===> Compiling $<"
	@$(CC) -o $@ $< $(CFLAGS) $(LFLAGS)
	@echo "===> Running $@"
	@./$@
	@echo "===> DONE!"
	@echo ""

all: $(EXE)
	@echo "Execute unit tests complete successfully!"

clean:
	rm -f $(EXE)