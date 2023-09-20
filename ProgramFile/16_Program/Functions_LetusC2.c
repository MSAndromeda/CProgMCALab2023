#include <stdio.h>

int calsum();
/* Sending and receiving values between functions */ 
int main( ) 
{ 
    int a, b, c, sum ; 
    printf ( "Enter any three numbers: " ) ; 
    scanf ( "%d %d %d", &a, &b, &c ) ; 
    sum = calsum ( a, b, c ) ;
    printf ( "Sum = %d\n", sum ) ; 
}

int calsum ( x, y, z ) 
int x, y, z ; 
{ 
    int d ; 
    d = x + y + z ; 
    return ( d ) ; 
}