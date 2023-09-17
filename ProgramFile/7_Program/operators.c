#include <stdio.h>

int main() {

    unsigned int a = 21;
    unsigned int b = 10;
    int c;
   
    printf("Arithmatic Operators:\n");
    printf("a + b: %d\n", a + b );	
    printf("a - b: %d\n", a - b );
    printf("a * b: %d\n", a * b );
    printf("a / b: %d\n", a / b );
    printf("a % b: %d\n", a % b );
    printf("++a: %d\n", ++a );
    printf("--a: %d\n", --a );


    printf("\nRelational Operators:\n");
    printf("a == b: %d\n", a == b); // 0 (false)
    printf("a != b: %d\n", a != b); // 1 (true)
    printf("a > b: %d\n", a > b);   // 0 (false)
    printf("a < b: %d\n", a < b);   // 1 (true)
    printf("a >= b: %d\n", a >= b); // 0 (false)
    printf("a <= b: %d\n", a <= b); // 1 (true)
   

    printf("\nLogical Operators:\n");
    printf("a && b: %d\n", a && b);
    printf("a || b: %d\n", a || b);
    printf("!a    : %d\n", !a);


    a = 60;
    b = 13;

    printf("\nBitwise Operators:\n");
    printf("a & b  : %d\n", a & b);
    printf("a | b  : %d\n", a | b);
    printf("a ^ b  : %d\n", a ^ b);
    printf("~a    : %d\n", ~a);
    printf("a << 2: %d\n", a << 2);
    printf("a >> 1: %d\n", a >> 1);


    a = 21;

    printf("\nAssignment Operators:\n");
    c = a;
    printf("c = a: %d\n", c);
    c += a;
    printf("c += a: %d\n", c);
    c -= a;
    printf("c -= a: %d\n", c);
    c *= a;
    printf("c *= a: %d\n", c);
    c /= a;
    printf("c /= a: %d\n", c);
    c = 200;
    c %= a;
    printf("c %%= a: %d\n", c);
    c <<=  2;
    printf("c <<= 2: %d\n", c );
    c >>=  2;
    printf("c >>= 2: %d\n", c );
    c &=  2;
    printf("c &= 2: %d\n", c );
    c ^=  2;
    printf("c ^= 2: %d\n", c );
    c |=  2;
    printf("c |= 2: %d\n", c );


    printf("\nMiscellaneous Operators:\n");
    printf("sizeof(int): %lu bytes\n", sizeof(int)); // Sizeof operator
    int x = 42;
    int *ptr = &x; // Address-of operator
    printf("Address of x: %p\n", ptr);

    return 0;
}