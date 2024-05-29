# 0x1C-makefiles

## Overview

This project focuses on using `make` and writing Makefiles to automate the build process for C programs. You'll learn how to create Makefiles to compile and link programs, manage dependencies, and streamline the development workflow.

## Project Structure

- `Makefile`: Contains build rules.
- `*.c`: C source files.
- `*.h`: Header files.
- `*.o`: Compiled object files (generated).
- `myprogram`: The final executable (generated).

## Makefile Rules

### Compilation

```makefile
CC = gcc
CFLAGS = -Wall -g

%.o: %.c
    $(CC) $(CFLAGS) -c $< -o $@
myprogram: main.o util.o
    $(CC) main.o util.o -o myprogram
clean:
    rm -f *.o myprogram
```

## usage
```makefile
make
make clean
```

