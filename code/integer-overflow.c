/* This code causes an integer overflow. */

#include<stdio.h>
#include<stdlib.h>

int main() {
    int x = 2147483646;
    // The maximum positive number on 'int' is: 2147483646

    printf("Test 1: The value of x is: %d\n", x);
    
    x = x + 1;
    printf("Test 2: The value of x is: %d\n", x);

    x = x + 1;
    printf("Test 3: The value of x is: %d\n", x);
 
    x = x + 1;
    printf("Test 3: The value of x is: %d\n", x);

            
    printf("\n");
    system("PAUSE");
    return 0;    
}
