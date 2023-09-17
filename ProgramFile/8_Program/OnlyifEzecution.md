# 💻 Program 8

## Objective

**Write a program to demostrate working of if statement in C Programming**

## Theory

### C - Decision Making
![Chart of Conditional Statements in C](./ConditionalStatementsinC.png)

Decision-making structures in programming involve evaluating conditions and executing specific statements based on whether the condition is true or false.

Show below is the general form of a typical decision making structure found in most of the programming languages −

![Figure of General form of a Decision making statement](./decision_making.jpg)


Following are the decision-making statements available in C:

- if Statement
- if-else Statement
- Nested if Statement
- if-else-if Ladder
- switch Statement
- Conditional Operator
- Jump Statements: 
   - break
   - continue
   - goto
   - return

### if Statement:

An if statement consists of a boolean expression followed by one or more statements.


#### if Statement Syntax

```
if(boolean_expression) {
   /* statement(s) will execute if the boolean expression is true */
}
```

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