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

**Write a program to Print Hello World using C Language**

## Software Requirements

**`Windows 11, VS Code`**

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
// Hello World Program in C language

#include <stdio.h>

int main(void){
    printf("Hello World!\n");
    // \n -> Inserts a newline in the text at this point.
    return 0;
}
```

## Output

![HelloWorld Program Output](./ProgramFile/1_Program/FirstProgramOutput.png)

# 💻 Program 2

## Objective

**Write a program to Calculate Simple Interest of A Investment in C Language**

## Software Requirements

**`Windows 11, VS Code`**

## Theory

### C-Variables
A variable is nothing but a name given to a storage area that our programs can manipulate.

### Variable Definition in C
- Syntax : 
```
type variable_list;
```

- Examples:
```c
int    i, j, k;
char   c, ch;
float  f, salary;
double d;
```

### Variable Declaration with Initialization
- Syntax : 
```
type variable_name = value;
```

- Examples:
```c
extern int d = 3, f = 5;    // declaration of d and f. 
int d = 3, f = 5;           // definition and initializing d and f. 
byte z = 22;                // definition and initializes z. 
char x = 'x';               // the variable x has the value 'x'.
```

### Extern
You will use the keyword extern to declare a variable at any place.
- Example:
```c
// Variable declaration:
extern int a, b;
extern int c;
extern float f;
```

## Code

```c
#include<stdio.h>

// Variable declaration:
   extern int p, n ;
   extern float r, si ;

int main( )
{
   // Variable definition:
    int p, n ;
    float r, si ;

   // actual initialization
    p = 1000 ;
    n = 3 ;
    r = 8.5 ;

    /* formula for simple interest */
    si = p * n * r / 100 ;
    
    printf ( "Simple Interest = %f\n" , si ) ;
    /*%f -> The %f can be used inside the formatted
    string for input and output of float data type.*/

    return 0;
}
```

## Output

![Simple Interest Program Output](./ProgramFile/2_Program/SimpleInterest_Output.png)


# 💻 Program 3

## Objective

**Write a program to demostrate working of different Operators in C Language**

## Software Requirements

**`Windows 11, VS Code`**

## Theory

### C-Operators
An operator is a symbol that tells the compiler to perform specific mathematical or logical functions. C language is rich in built-in operators and provides the following types of operators −
- Arithmetic Operators
- Relational Operators
- Logical Operators
- Bitwise Operators
- Assignment Operators
- Misc Operators

#### Arithmatic Operators
The following table shows all the arithmetic operators supported by the C language. Assume variable A holds 10 and variable B holds 20 then −

| Operator | Description                                                  | Example     |
| -------: | ------------------------------------------------------------ | ----------- |
|      `+` | Adds two operands.                                           | A + B = 30  |
|      `-` | Subtracts second operand from the first.                     | A − B = -10 |
|      `*` | Multiplies both operands.                                    | A * B = 200 |
|      `/` | Divides numerator by de-numerator.                           | B / A = 2   |
|      `%` | Gives remainder after an integer division.                   | B % A = 0   |
|      `++`| Increases the integer value by one.                          | A++ = 11    |
|      `--`| Decreases the integer value by one.                          | A++ = 11    |

#### Relational Operators
The following table shows all the relational operators supported by C. Assume variable A holds 10 and variable B holds 20 then −

| Operator | Description                                                  | Example    |
| -------: | ------------------------------------------------------------ | ---------- |
|      `==` | Checks if the values of two operands are equal or not. If yes, then the condition becomes true. | (A == B) is not true. |
|      `!=` | Checks if the values of two operands are equal or not. If the values are not equal, then the condition becomes true. | (A != B) is true. |
|      `>` | Checks if the value of left operand is greater than the value of right operand. If yes, then the condition becomes true. | (A > B) is not true. |
|      `<` | Checks if the value of left operand is less than the value of right operand. If yes, then the condition becomes true. | (A < B) is true.   |
|      `>=` | Checks if the value of left operand is greater than or equal to the value of right operand. If yes, then the condition becomes true. | (A >= B) is not true. |
|      `<=`| Checks if the value of left operand is less than or equal to the value of right operand. If yes, then the condition becomes true. | (A <= B) is true. |

#### Logical Operators
The following table shows all the arithmetic operators supported by the C language. Assume variable A holds 10 and variable B holds 20 then −

| Operator | Description                                                  | Example    |
| -------: | ------------------------------------------------------------ | ---------- |
|      `&&` | Called Logical AND operator. If both the operands are non-zero, then the condition becomes true. | (A && B) is false. |
|      `\|\|` | Called Logical OR Operator. If any of the two operands is non-zero, then the condition becomes true. | (A \|\| B) is true. |
|      `!` | Called Logical NOT Operator. It is used to reverse the logical state of its operand. If a condition is true, then Logical NOT operator will make it false. | !(A && B) is true. |

#### Bitwise Operators
Bitwise operator works on bits and perform bit-by-bit operation. The truth tables for &, |, and ^ is as follows −
|  p  |  q  |p & q| p \| q | p ^ q  |
| :-: | :-: | :-: | :----: | :----: |
| 0   |  0  |  0  |    0   |    0   |
| 0   |  1  |  0  |    1   |    1   |
| 1   |  1  |  1  |    1   |    0   |
| 1   |  0  |  0  |    1   |    1   |

The following table lists the bitwise operators supported by C. Assume variable 'A' holds 60 and variable 'B' holds 13, then −

| Operator | Description                                                  | Example     |
| -------: | ------------------------------------------------------------ | ----------- |
|      `&` | Binary AND Operator copies a bit to the result if it exists in both operands. | (A & B) = 12, i.e., 0000 1100  |
|      `\|` | Binary OR Operator copies a bit if it exists in either operand. | (A \| B) = 61, i.e., 0011 1101 |
|      `^` | Binary XOR Operator copies the bit if it is set in one operand but not both. | (A ^ B) = 49, i.e., 0011 0001 |
|      `~` | Binary One's Complement Operator is unary and has the effect of 'flipping' bits. | (~A ) = ~(60), i.e,. -0111101 |
|      `<<` | Binary Left Shift Operator. The left operands value is moved left by the number of bits specified by the right operand. | A << 2 = 240 i.e., 1111 0000 |
|      `>>` | Binary Right Shift Operator. The left operands value is moved right by the number of bits specified by the right operand. | A >> 2 = 15 i.e., 0000 1111 |


#### Assignment Operators

| Operator | Description                                                                              | Example     |
| -------: | ---------------------------------------------------------------------------------------- | ----------- |
|      `=` | Simple assignment operator. Assigns values from right side operands to left side operand | C = A + B will assign the value of A + B to C |
|      `+=` | Add AND assignment operator. It adds the right operand to the left operand and assign the result to the left operand. | C += A is equivalent to C = C + A |
|      `-=` | Subtract AND assignment operator. It subtracts the right operand from the left operand and assigns the result to the left operand. | C -= A is equivalent to C = C - A |
|      `*=` | Multiply AND assignment operator. It multiplies the right operand with the left operand and assigns the result to the left operand. | C *= A is equivalent to C = C * A |
|      `/=` | Divide AND assignment operator. It divides the left operand with the right operand and assigns the result to the left operand. | C /= A is equivalent to C = C / A |
|      `%=` | Modulus AND assignment operator. It takes modulus using two operands and assigns the result to the left operand. | C %= A is equivalent to C = C % A |
|      `<<=` | Left shift AND assignment operator. | C <<= 2 is same as C = C << 2 |
|      `>>=` | Right shift AND assignment operator. | C >>= 2 is same as C = C >> 2 |
|      `&=` | Bitwise AND assignment operator. | C >>= 2 is same as C = C >> 2 |
|      `^=` | Bitwise exclusive OR and assignment operator. | C ^= 2 is same as C = C ^ 2 |
|      `\|=` | Bitwise inclusive OR and assignment operator. | C \|= 2 is same as C = C \| 2 |

#### Misc Operators ↦ sizeof & ternary
Besides the operators discussed above, there are a few other important operators including sizeof and ? : supported by the C Language.

| Operator   | Description                                     | Example                                                      |
| ---------: | ----------------------------------------------- | ------------------------------------------------------------ |
| `sizeof()` | Returns the size of a variable.                 | sizeof(a), where a is integer, will return 4.                |
|      `&`   | Returns the address of a variable.              | &a; returns the actual address of the variable.              |
|      `*`   | Pointer to a variable.                          | *a; returns the value at the address stored in the variable. |
|      `?:`  | Pointer to a variable.                          | If Condition is true ? then value X : otherwise value Y      |


## Code

```c

```

## Output

![Simple Interest Program Output](./ProgramFile/2_Program/SimpleInterest_Output.png)


# 💻 Program 4

## Objective

**Understanding Datatypes**

## Software Requirements

**`Windows 11, VS Code`**

## Theory

### `#include` Statements

- `#include <stdlib.h>`: This line includes the standard library for functions like memory allocation (`malloc`, `free`).

- `#include <limits.h>`: This line includes a library containing constants for integer data types' limits.

- `#include <float.h>`: This line includes a library containing constants for floating-point data types' limits.

### Datatypes in C
![Datatypes in C Chart from GFG](./DatatypesInC.jpg)

#### Primitive Datatypes
- Primitive data types are the most basic data types that are used for representing simple values such as integers, float, characters, etc.

|  Datatype | Description |
| --------: | ----------- |
| `Integer` | The integer datatype in C is used to store the whole numbers without decimal values. Octal values, hexadecimal values, and decimal values can be stored in int data type in C. |
| `Character` | Character data type allows its variable to store only a single character. The size of the character is 1 byte. It is the most basic data type in C. It stores a single character and requires a single byte of memory in almost all compilers. |
|   `Floating Point` | In C programming float data type is used to store floating-point values. Float in C is used to store decimal and exponential values. It is used to store decimal numbers (numbers with floating point values) with single precision. |
| `Double Floating Point` | A Double data type in C is used to store decimal numbers (numbers with floating point values) with double precision. It is used to define numeric values which hold numbers with decimal values in C. |
| `Void` | The void data type in C is used to specify that no value is present. It does not provide a result value to its caller. It has no values and no operations. It is used to represent nothing. Void is used in multiple ways as function return type, function arguments as void, and pointers to void. |

##### Integer Types
The following table provides the details of standard integer types with their storage sizes and value ranges −

|Type	|Storage size|	Value range|
|----:|------------|------------|
|`char`	|1 byte	|-128 to 127 or 0 to 255|
|`unsigned char`|	1 byte|	0 to 255|
|`signed char`|	1 byte|	-128 to 127|
|`int`	|2 or 4 bytes	|-32,768 to 32,767 or -2,147,483,648 to 2,147,483,647|
|`unsigned int`|	2 or 4 bytes	|0 to 65,535 or 0 to 4,294,967,295|
|`short`|	2 bytes	|-32,768 to 32,767|
|`unsigned short`|	2 bytes	|0 to 65,535|
|`long`	|8 bytes or (4bytes for 32 bit OS)|	-9223372036854775808 to 9223372036854775807|
|`unsigned long`	|8 bytes	|0 to 18446744073709551615|

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

# 💻 Program 5

## Objective

**Understanding Floating Point Datatypes**

## Software Requirements

**`Windows 11, VS Code`**

## Theory

### Storage Size

- `sizeof(Data_Type)`: Calculates the storage space in bytes of provided datatype.

### Floating-Point Limits

The following `printf` statements provide information about the limits of floating-point data types:

- `FLT_MAX`: Prints the maximum positive finite value representable by a `float`.

- `FLT_MIN`: Prints the minimum positive finite value representable by a `float`.

- `-FLT_MAX`: Prints the maximum negative finite value representable by a `float`.

- `-FLT_MIN`: Prints the minimum negative finite value representable by a `float`.

- `DBL_MAX`: Prints the maximum positive finite value representable by a `double`.

- `DBL_MIN`: Prints the minimum positive finite value representable by a `double`.

- `-DBL_MAX`: Prints the maximum negative finite value representable by a `double`.

### Precision

- `printf("Precision value: %d\n", FLT_DIG);`: Prints the number of decimal digits of precision for the `float` data type.

## Code

```c
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main() {

    printf("Storage size for float : %lu \n", sizeof(float));
    printf("FLT_MAX     :   %g\n", (float) FLT_MAX);
    printf("FLT_MIN     :   %g\n", (float) FLT_MIN);
    printf("-FLT_MAX    :   %g\n", (float) -FLT_MAX);
    printf("-FLT_MIN    :   %g\n", (float) -FLT_MIN);
    printf("DBL_MAX     :   %g\n", (double) DBL_MAX);
    printf("DBL_MIN     :   %g\n", (double) DBL_MIN);
    printf("-DBL_MAX     :  %g\n", (double) -DBL_MAX);
    printf("Precision value: %d\n", FLT_DIG );

    return 0;
}
```

## Output

![Floating Point Datatypes Program Output](./ProgramFile/4_Program/FloatingPointDatatypes_Output.png)

# 💻 Program 6

## Objective

**Understanding Variables**

## Software Requirements

**`Windows 11, VS Code`**

## Theory

### Variable Declarations

- `extern int a, b;`: This declares global variables `a` and `b` of type `int` which are defined later in the code.

- `extern int c;`: This declares a global variable `c` of type `int` which is also defined later in the code.

- `extern float f;`: This declares a global variable `f` of type `float` which is also defined later in the code.

### Local Variable Definitions

Within the `main` function, local variables are defined:

- `int a, b;`: Declares local variables `a` and `b` of type `int`.

- `int c;`: Declares a local variable `c` of type `int`.

- `float f;`: Declares a local variable `f` of type `float`.

### Variable Initialization

- `a = 10;`: Initializes the local variable `a` with the value 10.

- `b = 20;`: Initializes the local variable `b` with the value 20.

### Arithmetic Operations

- `c = a + b;`: Calculates the sum of `a` and `b` and assigns it to the local variable `c`.

### Printing Results

- `printf("value of c : %d \n", c);`: Prints the value of `c` using the `%d` format specifier.

- `f = 70.0 / 3.0;`: Calculates the result of the floating-point division and assigns it to the local variable `f`.

- `printf("value of f : %f \n", f);`: Prints the value of `f` using the `%f` format specifier.

## Code

```c
#include <stdio.h>

// Variable declaration:
extern int a, b;
extern int c;
extern float f;

int main () {

   /* variable definition: */
   int a, b;
   int c;
   float f;

   /* actual initialization */
   a = 10;
   b = 20;

   c = a + b;
   printf("value of c : %d \n", c);

   f = 70.0/3.0;
   printf("value of f : %f \n", f);

   return 0;
}
```

## Output

![Understanding Variables Program Output](./ProgramFile/5_Program/UnderstandingVariables_Output.png)

# 💻 Program 7

## Objective

**Understanding Decision Making Statement if**

## Software Requirements

**`Windows 11, VS Code`**

## Theory

### if Statement Syntax

```
if(boolean_expression) {
   /* statement(s) will execute if the boolean expression is true */
}
```

### if Statement:

An if statement consists of a boolean expression followed by one or more statements.

- `if(a<20){}`: This line checks if the number entered by the user is within the specified range. If it is, the program will execute the code inside the curly braces.

### Format Specifier Used

| Format Specifier | Description                                                                                                                                                                |
| ---------------: | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
|             `%d` | We can use the signed integer format specifier %d in the scanf() and print() functions or other functions that use formatted string for input and output of int data type. |

### Relational Operator Used

| Operator | Description                                                                                                           |
| -------: | --------------------------------------------------------------------------------------------------------------------- |
|      `<` | Checks if the value of left operand is less than the value of right operand. If yes, then the condition becomes true. |

### Misc Operator Used

| Operator | Description                                                                                                           |
| -------: | --------------------------------------------------------------------------------------------------------------------- |
|      `&` | Returns the address of a variable.                                                                                    |


## Code

```c
// TutorialsPoint Program
#include <stdio.h>

int main () {

   /* local variable definition */
   int a = 10;

   /* check the boolean condition using if statement */

   if( a < 20 ) {
      /* if condition is true then print the following */
      printf("a is less than 20\n" );
   }

   printf("value of a is : %d\n", a);

   return 0;
}

// C Programming Book Program
#include <stdio.h>

int main(){
    int num;
    printf("Enter a number less than 10: ");
    scanf("%d", &num);

    if(num <= 10)
        printf("What an obedient servant you are!\n");

    return 0;
}

```

## Output

![Understanding if Program Output Tutorialspoint](./ProgramFile/6_Program/OnlyifProgram_output1.png)
![Understanding if Program Output LetusC](./ProgramFile/6_Program/OnlyifProgram_output2.png)

# 💻 Program 8

## Objective

**Understanding Decision Making Statement if-else**

## Software Requirements

**`Windows 11, VS Code`**

## Theory

### if-else Statement Syntax

```
if(boolean_expression) {
   /* statement(s) will execute if the boolean expression is true */
} else {
   /* statement(s) will execute if the boolean expression is false */
}
```

### if-else Statement:

An if statement can be followed by an optional else statement, which executes when the Boolean expression is false.

## Code

```c
// TutorialsPoint Program
#include <stdio.h>

int main () {

   /* local variable definition */
   int a = 100;

   /* check the boolean condition */
   if( a < 20 ) {
      /* if condition is true then print the following */
      printf("a is less than 20\n" );
   } else {
      /* if condition is false then print the following */
      printf("a is not less than 20\n" );
   }

   printf("value of a is : %d\n", a);

   return 0;
}

// C Programming Book Program

/* Calculation of gross salary */
#include <stdio.h>
int main()
{
    float bs, gs, da, hra ;
    printf ( "Enter basic salary " ) ;
    scanf ( "%f", &bs ) ;

    if ( bs < 1500 )
    {
        hra = bs * 10 / 100 ;
        da = bs * 90 / 100 ;
    }
    else
    {
        hra = 500 ;
        da = bs * 98 / 100 ;
    }
    gs = bs + hra + da ;
    printf ( "gross salary = Rs. %f", gs ) ;
}

```

## Output

![Understanding if-else Program Output Tutorialspoint](./ProgramFile/7_Program/ifelse_Program_output2.png)
![Understanding if-else Program Output LetusC](./ProgramFile/7_Program/ifelse_Program_output1.png)

# Program 9
## Objective
**Understanding Decision Statement nested if**


## Software Requirements
**`Windows 11, VS Code`**


## Theory

### nested if Statement Syntax
```
if( boolean_expression 1) {

   /* Executes when the boolean expression 1 is true */
   if(boolean_expression 2) {
      /* Executes when the boolean expression 2 is true */
   }
}
```

### nested if Statement:
You can use one if or else if statement inside another if or else if statement(s).

### Relational Operator Used

| Operator | Description                                                                              |
| -------: | ---------------------------------------------------------------------------------------- |
|     `==` | Checks if the values of two operands are equal or not. If yes, then the condition becomes true. |

## Code
```c
// TutorialsPoint Program
#include <stdio.h>
 
int main () {

   /* local variable definition */
   int a = 100;
   int b = 200;
 
   /* check the boolean condition */
   if( a == 100 ) {
   
      /* if condition is true then check the following */
      if( b == 200 ) {
         /* if condition is true then print the following */
         printf("Value of a is 100 and b is 200\n" );
      }
   }
   
   printf("Exact value of a is : %d\n", a );
   printf("Exact value of b is : %d\n", b );
 
   return 0;
}
// C Programming Book Program

/* A quick demo of nested if-else */ 
#include <stdio.h>
int main( ) 
{ 
    int i ; 
    printf ( "Enter either 1 or 2 " ) ; 
    scanf ( "%d", &i ) ; 
    if ( i == 1 ) 
        printf ( "You would go to heaven !" ) ; 
    else 
    { 
        if ( i == 2 ) 
            printf ( "Hell was created with you in mind" ) ; 
        else 
            printf ( "How about mother earth !" ) ; 
    } 
    return 0;
} 


```

## Output
![Understanding Nested-if Program Output](./ProgramFile/8_Program/Prog8_Outpur.png)

# Program 10
## Objective
**Understanding while Loop in C**


## Software Requirements
**`Windows 11, VS Code`**


## Theory

### While Loop Syntax
```
while(condition) {
   statement(s);
}
```

### While Loop:
Repeats a statement or group of statements while a given condition is true. It tests the condition before executing the loop body.

### Relational Operator Used

| Operator | Description                                                                              |
| -------: | ---------------------------------------------------------------------------------------- |
|     `<=` | Checks if the value of left operand is less than or equal to the value of right operand. If yes, then the condition becomes true. |

### Arithmetic Operator Used

| Operator | Description                                                                              |
| -------: | ---------------------------------------------------------------------------------------- |
|     `++` | Increment operator increases the integer value by one. |

## Code
```c
// TutorialsPoint Program
#include <stdio.h>
 
int main () {

   /* local variable definition */
   int a = 10;

   /* while loop execution */
   while( a < 20 ) {
      printf("value of a: %d\n", a);
      a++;
   }
 
   return 0;
}

// C Programming Book Program
#include<stdio.h>
int main( ) 
{ 
    int p, n, count ; 
    float r, si ; 
    count = 1 ; 
    while ( count <= 3 ) 
    { 
        printf ( "\nEnter values of p, n and r : " ) ;
        scanf("%d %d %f", &p, &n, &r);
        si=p*n*r/100;
        printf ( "Simple interest = Rs. %f\n", si ) ; 
        count++;
    } 
    return 0;
}
```

## Output
![Understanding while Program Output](./ProgramFile/9_Program/Prog9_Outpur.png)

# Program 11
## Objective
**Understanding do...while Loop in C**


## Software Requirements
**`Windows 11, VS Code`**


## Theory

### do..while Loop Syntax
```
do {
   statement(s);
} while( condition );
```

### do...while Loop:
It is more like a while statement, except that it tests the condition at the end of the loop body.


## Code
```c
// TutorialsPoint Program
#include <stdio.h>
 
int main () {

   /* local variable definition */
   int a = 10;

   /* do loop execution */
   do {
      printf("value of a: %d\n", a);
      a++;
   }while( a < 20 );
 
   return 0;
}

// C Programming Book Program
#include<stdio.h>

int main() 
{ 
    do 
    { 
        printf ( "Hello there \n") ; 
    } while ( 4 < 1 ) ; 
    
    return 0;
}
```

## Output
![Understanding do...while Program Output](./ProgramFile/10_Program/Prog10_Outpur.png)
