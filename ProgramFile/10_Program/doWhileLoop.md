# Program 10
## Objective
**Understanding do...while Loop in C**


## Software Requirements
**`Windows 11, Github Codespaces, Chrome(or other browser for using CodeSpaces)`**


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
![Understanding do...while Program Output](./Prog10_Outpur.png)