# 💻 Program 5

## Objective

**Write a Program to demostrate the working of Variables in C Language**

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
int d = 3, f = 5;           // definition and initializing d and f. 
char x = 'x';               // the variable x has the value 'x'.
```

## Code

```c
#include <stdio.h>

// Variable declaration:
// You will use the keyword extern to declare a variable at any place.
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