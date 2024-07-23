# The C Programming Language - Exercises

This repository contains my solutions to the exercises from the book "The C Programming Language" by Brian W. Kernighan and Dennis M. Ritchie.

## How to Run

1. Clone the repository:
2. 
```bash
git clone https://github.com/biraj21/the-c-programming-language
```

3. Compile a specific program:

   ```bash
   make bin/[chapter-number]-[exercise-number]
   ```

   For example:

   ```bash
   make bin/1-1
   ```

4. Run the compiled program:

   ```bash
   ./bin/[chapter-number]-[exercise-number]
   ```

   For example:

   ```bash
   ./bin/1-1
   ```

Alternatively, you can just compile all programs:

```bash
make
```

This will compile all .c files in the exercises directory and place the executables in the same directory.

To clean up compiled files:

```bash
make clean
```

## Structure

- `exercises/`: Contains all exercise solutions, named as `[chapter-number]-[exercise-number].c`
- `bin/`: Will be created when the programs are built. It will store compiled binaries.
- `Makefile`: Used for compiling the programs

## Note

Ensure you have GCC or Clang installed on your system to compile these programs.

## Environment

These programs have been tested with Clang on MacBook Pro with Apple M3 chip.

```
Apple clang version 15.0.0 (clang-1500.3.9.4)
Target: arm64-apple-darwin23.5.0
Thread model: posix
```
