#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main() {
    bool a;

    a = 0;    
    printf("Test 1: The value of a is: %d\n", a);

    a = 1;    
    printf("Test 2: The value of a is: %d\n", a);

    a = 4;      // This is an invalid value. It could print anything.
    printf("Test 3: The value of a is: %d\n", a);

        
    printf("\n");
    system("PAUSE");
    return 0;    
}
