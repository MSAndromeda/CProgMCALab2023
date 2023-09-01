# Program 3
## Objective
**Understanding Datatypes**


## Software Requirements
**`Windows 11, Github Codespaces, Chrome(or other browser for using CodeSpaces)`**


## Theory
### `#include` Statements
- `#include <stdlib.h>`: This line includes the standard library for functions like memory allocation (`malloc`, `free`).

- `#include <limits.h>`: This line includes a library containing constants for integer data types' limits.

- `#include <float.h>`: This line includes a library containing constants for floating-point data types' limits.

### Integer Limits
- `printf("CHAR_BIT : %d\n", CHAR_BIT);`: Prints the number of bits in a char data type.

- `printf("CHAR_MAX : %d\n", CHAR_MAX);`: Prints the maximum value a char can hold.

- `printf("CHAR_MIN : %d\n", CHAR_MIN);`: Prints the minimum value a char can hold.

- `printf("INT_MAX : %d\n", INT_MAX);`: Prints the maximum value an int can hold.

- `printf("INT_MIN : %d\n", INT_MIN);`: Prints the minimum value an int can hold.

- `printf("LONG_MAX : %ld\n", (long) LONG_MAX);`: Prints the maximum value a long can hold.

- `printf("LONG_MIN : %ld\n", (long) LONG_MIN);`: Prints the minimum value a long can hold.

- `printf("SCHAR_MAX : %d\n", SCHAR_MAX);`: Prints the maximum value a signed char can hold.

- `printf("SCHAR_MIN : %d\n", SCHAR_MIN);`: Prints the minimum value a signed char can hold.

- `printf("SHRT_MAX : %d\n", SHRT_MAX);`: Prints the maximum value a short can hold.

- `printf("SHRT_MIN : %d\n", SHRT_MIN);`: Prints the minimum value a short can hold.

- `printf("UCHAR_MAX : %d\n", UCHAR_MAX);`: Prints the maximum value an unsigned char can hold.

- `printf("UINT_MAX : %u\n", (unsigned int) UINT_MAX);`: Prints the maximum value an unsigned int can hold.

- `printf("ULONG_MAX : %lu\n", (unsigned long) ULONG_MAX);`: Prints the maximum value an unsigned long can hold.

- `printf("USHRT_MAX : %d\n", (unsigned short) USHRT_MAX);`: Prints the maximum value an unsigned short can hold.


## Code
```c
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main() {

    printf("CHAR_BIT    :   %d\n", CHAR_BIT);
    printf("CHAR_MAX    :   %d\n", CHAR_MAX);
    printf("CHAR_MIN    :   %d\n", CHAR_MIN);
    printf("INT_MAX     :   %d\n", INT_MAX);
    printf("INT_MIN     :   %d\n", INT_MIN);
    printf("LONG_MAX    :   %ld\n", (long) LONG_MAX);
    printf("LONG_MIN    :   %ld\n", (long) LONG_MIN);
    printf("SCHAR_MAX   :   %d\n", SCHAR_MAX);
    printf("SCHAR_MIN   :   %d\n", SCHAR_MIN);
    printf("SHRT_MAX    :   %d\n", SHRT_MAX);
    printf("SHRT_MIN    :   %d\n", SHRT_MIN);
    printf("UCHAR_MAX   :   %d\n", UCHAR_MAX);
    printf("UINT_MAX    :   %u\n", (unsigned int) UINT_MAX);
    printf("ULONG_MAX   :   %lu\n", (unsigned long) ULONG_MAX);
    printf("USHRT_MAX   :   %d\n", (unsigned short) USHRT_MAX);

    return 0;
}
```

## Output
![Datatypes Program Output](./Datatypes_Output.png)