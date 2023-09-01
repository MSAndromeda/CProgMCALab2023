# Hello Everyone! 👋

<blockquote>
I'm Manas Anand Singh, and I'm thrilled to introduce this repository to make C Programming a breeze for everyone. If you find value in my work, please consider following me on <a href="https://github.com/MSAndromeda">github</a>. Your support means the world to me, and it keeps me motivated to continue providing helpful content.

🚀 Let's code together and learn!

**Thank you for your support!**

Warm regards,
Manas Anand Singh (Andro) 😊

<a href="https://github.com/MSAndromeda" style="background-color:#0366d6; color:#ffffff; padding: 10px 20px; text-decoration: none; border-radius: 5px; font-weight: bold;">Follow me</a>

# 💻 Program 1

## Objective

**To Print Hello World to The Screen**

## Software Requirements

**`Windows 11, Github Codespaces, Chrome(or other browser for using CodeSpaces)`**

## Theory

### #include <stdio.h>

It is a preprocessor Command which tells C Compiler to include **`stdio.h`** file before going to actual Compilation

### int main(void)

It is the main Function where the program execution begins.

### //(Single Line Comment)

It is known as Single line Comment in C Programming. It is used when we want to ignore some text we write. When we write text that can provide information about program to a programmer

### printf()

It is a pre-defined Function available in C programming for outputiing the Result to the screen.

### return 0

The next line **`return 0;`** terminates the main() function and returns the value 0

## Code

```c
#include <stdio.h>

int main(void){
    // First Program of my Practical File
    printf("Hello World!\n");
    return 0;
}
```

## Output

![HelloWorld Program Output](./ProgramFile/1_Program/FirstProgramOutput.png)

# 💻 Program 2

## Objective

**To Calculate Simple Interest of A Investment**

## Software Requirements

**`Windows 11, Github Codespaces, Chrome(or other browser for using CodeSpaces)`**

## Theory

### Arithmatic Operators Used

| Operator | Description                        |
| -------: | ---------------------------------- |
|      `*` | Multiplies both operands.          |
|      `/` | Divides numerator by de-numerator. |

### Assignment Operator Used

| Operator | Description                                                                              |
| -------: | ---------------------------------------------------------------------------------------- |
|      `=` | Simple assignment operator. Assigns values from right side operands to left side operand |

### Datatypes Used

|  Datatype | Description                                                                                                                                                                                                                          |
| --------: | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ |
| `Integer` | The integer datatype in C is used to store the whole numbers without decimal values. Octal values, hexadecimal values, and decimal values can be stored in int data type in C.                                                       |
|   `Float` | In C programming float data type is used to store floating-point values. Float in C is used to store decimal and exponential values. It is used to store decimal numbers (numbers with floating point values) with single precision. |

### Format Specifier Used

| Operator | Description                                                                                                                                                                                                                                                       |
| -------: | ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
|     `%f` | The %f is the floating point format specifier in C language that can be used inside the formatted string for input and output of float data type. Apart from %f, we can use %e or %E format specifiers to print the floating point value in the exponential form. |

### Escape Sequence Used

| Escape Sequence | Description                                  |
| --------------: | -------------------------------------------- |
|            `\n` | Inserts a newline in the text at this point. |

## Code

```c
#include<stdio.h>

int main( )
{

    int p, n ;
    float r, si ;

    p = 1000 ;
    n = 3 ;
    r = 8.5 ;

    /* formula for simple interest */
    si = p * n * r / 100 ;
    printf ( "Simple Interest = %f\n" , si ) ;

    return 0;
}
```

## Output

![Simple Interest Program Output](./ProgramFile/2_Program/SimpleInterest_Output.png)

# 💻 Program 3

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

![Datatypes Program Output](./ProgramFile/3_Program/Datatypes_Output.png)
