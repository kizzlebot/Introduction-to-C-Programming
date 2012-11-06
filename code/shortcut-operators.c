#include<stdio.h>
#include<stdlib.h>

int main() {
    int a, b;
    
    a=3;           // Initialization
    a += 10;       // same as: a = a + 10;
    printf("Test 1: The value is equal to: %d\n", a);

    a=3; b=5;     // Initialization        
    a += b;       // same as: a = a + b;
    printf("Test 2: The value is equal to: %d\n", a);
    
    a=3;           // Initialization
    a -= 1;       // same as: a = a - 1;
    printf("Test 3: The value is equal to: %d\n", a);    
    
    a=3; b=5;     // Initialization        
    a *= b;       // same as: a = a * b;
    printf("Test 4: The value is equal to: %d\n", a);

    a=8; b=2;     // Initialization        
    a /= b;       // same as: a = a / b;
    printf("Test 5: The value is equal to: %d\n", a);

    a=9; b=2;     // Initialization        
    a %= b;       // same as: a = a % b;
    printf("Test 5: The value is equal to: %d\n", a);

        
    printf("\n");
    system("PAUSE");
    return 0;    
}
