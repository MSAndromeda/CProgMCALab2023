# Program 6
## Objective
**Understanding Decision Making Statement if**


## Software Requirements
**`Windows 11, Github Codespaces, Chrome(or other browser for using CodeSpaces)`**


## Theory

### if Statement Syntax
```
if(boolean_expression) {
   /* statement(s) will execute if the boolean expression is true */
}
```

### if Statement:
An if statement consists of a boolean expression followed by one or more statements.

* `if(0<a && 10>=a){}`: This line checks if the number entered by the user is within the specified range. If it is, the program will execute the code inside the curly braces.

### Format Specifier Used
| Format Specifier   | Description                                   |
|---:|---|
|     `%d`     |We can use the signed integer format specifier %d in the scanf() and print() functions or other functions that use formatted string for input and output of int data type.    |

### Assignment Operator Used
| Operator  | Description                                   |
|---:|---|
|     `<`   | Checks if the value of left operand is less than the value of right operand. If yes, then the condition becomes true. |
|     `&`   | Returns the address of a variable. |

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
![Understanding if Program Output Tutorialspoint](./OnlyifProgram_output1.png)
![Understanding if Program Output LetusC](./OnlyifProgram_output2.png)