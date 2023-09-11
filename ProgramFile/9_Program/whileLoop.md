# Program 8
## Objective
**Understanding while Loop in C**


## Software Requirements
**`Windows 11, Github Codespaces, Chrome(or other browser for using CodeSpaces)`**


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
![Understanding Nested-if Program Output](./Prog9_Outpur.png)