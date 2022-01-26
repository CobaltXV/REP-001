# path macros
SRC_PATH := csrc
HEADER_PATH := ../include

# tool macros
CC := gcc
CCFLAGS := -Wall -Wextra -pedantic -I$(HEADER_PATH)
DBGFLAGS := -g -DDEBUG

# compile macros
TARGET_NAME := program-001
ifeq ($(OS),Windows_NT)
	TARGET_NAME := $(addsuffix .exe,$(TARGET_NAME))
endif

TARGET := $(TARGET_NAME)

# src files & obj files
SRC := ../$(SRC_PATH)/*.c ../$(SRC_PATH)/net/*.c ../$(SRC_PATH)/enc/*.c

# default rule
default: $(TARGET)

debug:
	$(CC) $(CCFLAGS) $(DBGFLAGS) -o $(TARGET_NAME) $(SRC)

$(TARGET): 
	$(CC) $(CCFLAGS) -o $@ $(SRC)

# phony targets
.PHONY: clean
clean:
	@rm -f *.o
	@rm -f $(TARGET_NAME)
