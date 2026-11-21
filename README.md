
*This project has been created as part of the 42 curriculum by zessalih.*

## Description

ft_printf is a C project that recreates a simplified version of the standard printf() function.

The goal is to understand variadic functions, formatted output, and how different data types are converted into printable text.

### Supported Conversions

| Conversion | Description |
|---|---|
| `%c` | Prints a single character. |
| `%s` | Prints a string. |
| `%p` | Prints a pointer address in hexadecimal. |
| `%d` / `%i` | Prints a signed decimal integer. |
| `%u` | Prints an unsigned decimal integer. |
| `%x` | Prints a hexadecimal number in lowercase. |
| `%X` | Prints a hexadecimal number in uppercase. |
| `%%` | Prints a percent sign. |

## Instructions

### Building

Run the following command to compile the library:

```bash
make
```

This generates the `libftprintf.a` static library.

Other available commands:

| Command | Description |
|---|---|
| `make clean` | Remove object files. |
| `make fclean` | Remove object files and `libftprintf.a`. |
| `make re` | Rebuild the library from scratch. |

### Usage

Include the header in your C program:

```c
#include "ft_printf.h"
```

Compile your program by linking it with the library:

```bash
cc main.c libftprintf.a -o main
```

Run the executable:

```bash
./main
```

## Algorithm and Data Structures

The implementation uses a sequential scan of the format string to detect format specifiers.

- **Parsing:** `ft_printf` scans the format string, while `ft_check_char` identifies conversion sequences.
- **Argument Handling:** `va_list` and `va_arg` are used to access variadic arguments.
- **Conversion:** `ft_convert` dispatches each specifier to the corresponding output function.
- **Number Formatting:** `ft_put_base` uses recursion and a digit string to print numbers in decimal or hexadecimal.
- **Output:** Characters are written directly to standard output using `write`.

### Design Choices

The implementation uses simple variables, a `va_list`, and constant digit strings instead of additional data structures.

This approach keeps the code divided into small functions and allows decimal and hexadecimal formatting to share the same conversion routine.

## Resources

### References

- [C Reference](https://en.cppreference.com/w/c) — C language features and standard library documentation.
- [GNU Make Manual](https://www.gnu.org/software/make/manual/) — Makefile rules and build automation.
- [Stack Overflow](https://stackoverflow.com/) — Programming discussions and troubleshooting.

### AI Usage

AI was used to clarify C concepts, summarize technical information, assist with troubleshooting, and help write this README.
