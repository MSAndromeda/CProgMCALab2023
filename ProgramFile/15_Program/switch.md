# 💻 Program 15
## Objective
**Write a program to demostrate Working of Switch case in C Programming**

## Theory

### Switch Statement
A switch statement allows a variable to be tested for equality against a list of values.

#### Syntax
```
switch(expression) {

   case constant-expression  :
      statement(s);
      break; /* optional */
	
   case constant-expression  :
      statement(s);
      break; /* optional */
  
   /* you can have any number of case statements */
   default : /* Optional */
   statement(s);
}
```

### break statement
Terminates the loop or switch statement and transfers execution to the statement immediately following the loop or switch.

#### Syntax
```
break;
```

### continue statement
Causes the loop to skip the remainder of its body and immediately retest its condition prior to reiterating.

#### Syntax
```
continue;
```

## Code
```c
// Program from Let us C
#include <stdio.h>

int main( ) 
{ 
    int i = 2 ; 
    switch ( i ) 
    { 
        case 1 : 
            printf ( "I am in case 1 \n" ) ; 
            break ; 
        case 2 : 
            printf ( "I am in case 2 \n" ) ; 
            break ; 
        case 3 : 
            printf ( "I am in case 3 \n" ) ; 
            break ; 
        default : 
            printf ( "I am in default \n" ) ; 
    }
    return 0;
}


// Program from Tutorials Point
#include <stdio.h>
 
int main () {

   /* local variable definition */
   char grade = 'B';

   switch(grade) {
      case 'A' :
         printf("Excellent!\n" );
         break;
      case 'B' :
      case 'C' :
         printf("Well done\n" );
         break;
      case 'D' :
         printf("You passed\n" );
         break;
      case 'F' :
         printf("Better try again\n" );
         break;
      default :
         printf("Invalid grade\n" );
   }
   
   printf("Your grade is %c\n", grade );
 
   return 0;
}
```

## Output
![Understanding For Program Output](./Prog15_Output.png)