#include<stdio.h>
#include<stdlib.h>

int main() {
    int a, b;
    
    a = 14;    
    printf("Test 1: The value is equal to: %d\n", a++);
    printf("Test 2: The value is equal to: %d\n", a);
    
    printf("\n");
    
    b=7;
    printf("Test 3: The value is equal to: %d\n", ++b);
        
    printf("\n");
    system("PAUSE");
    return 0;    
}
