# Inputs
CC=gcc
RUN_ALLS=false
HLSLMATH="./hlslmath_prebuild.h"

# Build flags
CFLAGS=-Wall
LFLAGS=
ifneq ($(OS),Windows_NT)
LFLAGS+=-lm
endif

INC_DIR=../include
SRC_DIR=../src
OUT_DIR=out

HLSLMATH_SRC=$(wildcard ../src/**.h)

UNIT_TESTS_DIR=cases
UNIT_TESTS_SRC=$(wildcard $(UNIT_TESTS_DIR)/*.cpp)
UNIT_TESTS_EXE=$(patsubst $(UNIT_TESTS_DIR)/%.cpp,$(OUT_DIR)/%.exe,$(UNIT_TESTS_SRC))
UNIT_TESTS_CFLAGS="-DHLSLMATH_H=\"$(HLSLMATH)\"" -DRUN_UNIT_TESTS
#-DCONTINUE_UNIT_TEST_ON_FAIL

.PHONY: clean all

$(OUT_DIR)/%.exe: $(UNIT_TESTS_DIR)/%.cpp
	@echo "Execute unit test for '$(patsubst ../%.cpp,%,$<)'"
	@echo "===> COMPILING $<"
	@mkdir -p $(OUT_DIR)
	@$(CC) -o $@ $< -I$(INC_DIR) $(CFLAGS) $(LFLAGS) $(UNIT_TESTS_CFLAGS)
	@echo "===> RUNNING $@"
	@./$@ "===> [$@]"
	@echo "===> DONE!"
	@echo ""

all: 
ifeq ($(RUN_ALLS),true)
	@make clean --quiet
endif
	@make run --quiet
# @echo "============================================="
# @echo "Execute all unit tests complete successfully!"

run: $(UNIT_TESTS_EXE)

clean:
	rm -rf $(OUT_DIR)

autorun:
ifneq ($(OS),Windows_NT)
#@echo "Auto run unit tests is not supported on current platform!"
	@echo "Auto run unit tests can only run on Windows!"
else
	@mkdir -p $(OUT_DIR)
	@rm -f $(OUT_DIR)/test_auto_runner.exe
	@$(CC) -o $(OUT_DIR)/test_auto_runner.exe test_auto_runner.c $(CFLAGS)
	@./$(OUT_DIR)/test_auto_runner.exe $(CC)
endif