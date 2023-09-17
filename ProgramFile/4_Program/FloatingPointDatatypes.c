#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main() {

    printf("Storage size for float : %lu \n", sizeof(float));
    // sizeof(Data_Type): Calculates the storage space in bytes of the provided data type.

    printf("FLT_MAX: %g\n", (float) FLT_MAX);
    // %g: Format specifier for a general floating-point number.
    printf("FLT_MIN: %g\n", (float) FLT_MIN);
    printf("-FLT_MAX: %g\n", (float) -FLT_MAX);
    printf("-FLT_MIN: %g\n", (float) -FLT_MIN);
    printf("Double Max: %g\n", (double) DBL_MAX);
    printf("Double Min: %g\n", (double) DBL_MIN);
    printf("-Double Max: %g\n", (double) -DBL_MAX);

    printf("Float Precision: %d decimal places\n", FLT_DIG);
    // Decimal digits of precision for float.

    return 0;
}