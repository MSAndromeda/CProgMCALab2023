# Program 4
## Objective
**Understanding Floating Point Datatypes**


## Software Requirements
**`Windows 11, Github Codespaces, Chrome(or other browser for using CodeSpaces)`**


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
![Floating Point Datatypes Program Output](./FloatingPointDatatypes_Output.png)