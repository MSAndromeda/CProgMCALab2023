# Program 1
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
![HelloWorld Program Output](./FirstProgramOutput.png)