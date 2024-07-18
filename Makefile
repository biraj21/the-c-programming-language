CC := gcc
CFLAGS := -Wall -Wextra -Wpedantic -Werror -std=c99

EXERCISES := ./exercises
BIN := ./bin

# find all .c files in the exercises directory (non-recursive)
SOURCES := $(wildcard $(EXERCISES)/*.c)

# generate target names in the bin directory
TARGETS := $(patsubst $(EXERCISES)/%.c,$(BIN)/%,$(SOURCES))

all: setup $(TARGETS)

# rule to compile .c files and place executables in bin directory
$(BIN)/%: $(EXERCISES)/%.c
	$(CC) $(CFLAGS) $< -o $@

# setup rule to create bin directory
setup:
	mkdir -p $(BIN)

# clean rule
clean:
	rm -rf $(BIN)

# phone targets to make sure that these rules run everytime
.PHONY: all clean setup