

```markdown
# 0x18-dynamic_libraries

This repository contains the source code and dynamic library for the **0x18-dynamic_libraries** project. The project focuses on creating a dynamic library with various functions that can be linked and used by other programs.

## Description

The **0x18-dynamic_libraries** project involves creating a dynamic library named `libdynamic.so` that includes several functions. These functions provide various functionalities, such as character manipulation, string manipulation, and more.

The repository includes the following files:

- `main.h`: Header file containing the function prototypes for the library functions.
- `dynamic.c`: Source file that implements the functions defined in `main.h`.
- `libdynamic.so`: The shared library file created by compiling `dynamic.c`.

## Usage

To use the dynamic library `libdynamic.so` in your programs, you can follow these steps:

1. Clone this repository to your local machine:

   ```bash
   git clone https://github.com/Shvayne/0x18-dynamic_libraries.git
   ```

2. Include the `main.h` header file in your source code:

   ```c
   #include "main.h"
   ```

3. Compile your program with the dynamic library:

   ```bash
   gcc -Wall -Werror -Wextra -pedantic -std=c89 -L<path_to_repository> -ldynamic -o your_program your_program.c
   ```

   Replace `<path_to_repository>` with the actual path to the cloned repository.

4. Run your program:

   ```bash
   ./your_program
   ```

## Dependencies

The **0x18-dynamic_libraries** project does not have any external dependencies. It is designed to work on Linux-based systems.

## Author

This project is authored by christiana apionko (https://github.com/Shvayne). Feel free to reach out for any questions or suggestions
