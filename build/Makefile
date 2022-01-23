# path macros
SRC_PATH := csrc
HEADER_PATH := ../include

# tool macros
CC := gcc
CCFLAGS := -Wall -Wextra -pedantic -I$(HEADER_PATH)
DBGFLAGS := -g
CCOBJFLAGS := $(CCFLAGS) -c

# compile macros
TARGET_NAME := program-001
ifeq ($(OS),Windows_NT)
	TARGET_NAME := $(addsuffix .exe,$(TARGET_NAME))
endif

TARGET := $(TARGET_NAME)
TARGET_DEBUG := $(TARGET_NAME)

# src files & obj files
SRC := ../$(SRC_PATH)/*.c ../$(SRC_PATH)/net/*.c ../$(SRC_PATH)/enc/*.c

# default rule
default: all

# non-phony targets
$(TARGET): 
	$(CC) $(CCFLAGS) -o $@ $(SRC)

.PHONY: all
all: $(TARGET)

.PHONY: clean
clean:
	@rm -f *.o