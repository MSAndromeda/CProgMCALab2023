# Program 5
## Objective
**Understanding Variables**


## Software Requirements
**`Windows 11, Github Codespaces, Chrome(or other browser for using CodeSpaces)`**


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
![Understanding Variables Program Output](./UnderstandingVariables_Output.png)