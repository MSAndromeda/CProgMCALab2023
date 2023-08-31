# Program 2
## Objective
**To Calculate Simple Interest of A Investment**


## Software Requirements
**`Windows 11, Github Codespaces, Chrome(or other browser for using CodeSpaces)`**


## Theory
### Arithmatic Operators Used
| Operator  | Description                                   |
|---: |---|
|     `*`     | Multiplies both operands.                     |
|     `/`     | Divides numerator by de-numerator.            |

### Assignment Operator Used
| Operator  | Description                                   |
|---:|---|
|     `=`   | Simple assignment operator. Assigns values from right side operands to left side operand |

### Datatypes Used
| Datatype  | Description                                   |
|---:|---|
|  `Integer`  | The integer datatype in C is used to store the whole numbers without decimal values. Octal values, hexadecimal values, and decimal values can be stored in int data type in C. |
|   `Float`   | In C programming float data type is used to store floating-point values. Float in C is used to store decimal and exponential values. It is used to store decimal numbers (numbers with floating point values) with single precision. |

### Format Specifier Used
| Operator   | Description                                   |
|---:|---|
|     `%f`     | The %f is the floating point format specifier in C language that can be used inside the formatted string for input and output of float data type. Apart from %f, we can use %e or %E format specifiers to print the floating point value in the exponential form.    |

### Escape Sequence Used
| Escape Sequence  | Description                                   |
|---:|---|
|     `\n`   | Inserts a newline in the text at this point. |


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
![Simple Interest Program Output](./SimpleInterest_Output.png)