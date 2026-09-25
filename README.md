*This activity has been created as part of the 42 curriculum by asem-hasan.*

# ft_printf

## Description

`ft_printf` is a 42 school project that consists of recreating the behavior of the standard C `printf` function.

The goal of this project is to understand and implement **variadic functions** in C using `va_list`, `va_start`, `va_arg`, and `va_end`.

The program receives a format string and a variable number of arguments, interprets the format specifiers, and prints the corresponding values.

The mandatory conversions implemented by this project are:

* `%c` — Prints a single character.
* `%s` — Prints a string.
* `%p` — Prints a pointer address in hexadecimal format.
* `%d` — Prints a signed decimal integer.
* `%i` — Prints a signed decimal integer.
* `%u` — Prints an unsigned decimal integer.
* `%x` — Prints an unsigned hexadecimal integer using lowercase letters.
* `%X` — Prints an unsigned hexadecimal integer using uppercase letters.
* `%%` — Prints a percent sign.

The function also returns the number of characters printed.

## Instructions

### Requirements

The project requires:

* A C compiler such as `cc`.
* `make`.
* The `libft` library created in the previous 42 project.

### Compilation

Clone the repository and enter the project directory:

```bash
git clone <repository-url>
cd ft_printf
```

Build the library with:

```bash
make
```

This creates:

```text
libftprintf.a
```

To remove object files:

```bash
make clean
```

To remove object files and the compiled library:

```bash
make fclean
```

To rebuild everything:

```bash
make re
```

### Using the library

Include the project header in your C program:

```c
#include "ft_printf.h"
```

Then compile your program together with the library:

```bash
cc main.c -L. -lftprintf
```

Example:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s!\n", "Asem");
    ft_printf("Number: %d\n", 42);
    ft_printf("Hexadecimal: %x\n", 255);
    return (0);
}
```

## Algorithm and Data Structure

### Format Parsing Algorithm

The implementation processes the format string from left to right.

A character index is used to inspect each character of the format string:

1. If the current character is not `%`, it is printed directly.
2. If `%` is found, the next character is checked.
3. The corresponding conversion function is called depending on the conversion specifier.
4. The number of printed characters is tracked through a counter.
5. After processing the conversion, parsing continues until the end of the format string.

For example:

```text
"Hello %s %d"
       ↓
     format
       ↓
   detect '%'
       ↓
     detect 's'
       ↓
   read next argument
       ↓
    print string
```

This approach allows the function to process an arbitrary number of arguments while keeping the main parsing logic simple.

### Variadic Arguments

The project uses the standard C `<stdarg.h>` functionality:

```c
va_list
va_start()
va_arg()
va_end()
```

`va_list` maintains the state required to access the additional arguments.

`va_start` initializes the argument traversal, `va_arg` retrieves each argument using the expected type, and `va_end` finishes the traversal.

The expected type depends on the conversion:

```text
%c → int
%s → char *
%p → void *
%d → int
%i → int
%u → unsigned int
%x → unsigned int
%X → unsigned int
```

### Number Conversion

Decimal and hexadecimal numbers are printed using division and modulo operations.

For decimal numbers, base 10 is used:

```text
number / 10
number % 10
```

For hexadecimal numbers, base 16 is used:

```text
number / 16
number % 16
```

Hexadecimal digits are selected from lookup strings:

```text
0123456789abcdef
0123456789ABCDEF
```

For pointers, the `void *` value is converted to an `unsigned long` representation so that the address can be processed as a hexadecimal number.

### Data Structures

The project does not require complex data structures.

The main data used by the implementation are:

* A format string (`const char *`).
* A `va_list` for accessing variadic arguments.
* Integer variables for counters and number conversion.
* Character lookup strings for hexadecimal conversion.

This keeps the implementation lightweight and appropriate for the requirements of the project.

## Features

* Variadic function handling.
* Character printing.
* String printing.
* Signed decimal numbers.
* Unsigned decimal numbers.
* Lowercase hexadecimal numbers.
* Uppercase hexadecimal numbers.
* Pointer address printing.
* Percent sign handling.
* Character count returned by `ft_printf`.
* `NULL` handling for `%s` and `%p`.

## Example Output

```text
Hello Asem!
Number: 42
Unsigned: 4294967295
Lowercase hex: ff
Uppercase hex: FF
Pointer: 0x7ffe12345678
Percent: 100%
```

The exact pointer address depends on the execution environment.

## Resources

### Documentation

* C `printf` documentation and conversion specifications.
* C `<stdarg.h>` documentation for variadic functions.
* C language documentation for pointers, integer types, and type conversions.
* The 42 `ft_printf` project subject.

### AI Usage

AI was used as a learning and debugging assistant during the project.

It was used for:

* Explaining the requirements of the `ft_printf` project.
* Explaining variadic functions and the use of `va_list`, `va_start`, `va_arg`, and `va_end`.
* Clarifying the expected types for each conversion specifier.
* Explaining pointers and hexadecimal pointer representation for `%p`.
* Explaining the difference between signed and unsigned integers.
* Helping understand compiler errors, Valgrind errors, and segmentation faults.
* Reviewing implementation logic and identifying bugs during development.
* Providing testing examples and helping understand expected outputs.

The implementation and final code were written and tested as part of the project work. AI assistance was used primarily to explain concepts, provide debugging guidance, and clarify errors rather than as a replacement for understanding the project requirements.

## Author

**asem-hasan**

