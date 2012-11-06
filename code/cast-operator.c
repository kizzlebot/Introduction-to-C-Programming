#include<stdio.h>
#include<stdlib.h>

int main() {
    int a=10, b=3;          // declare and initialize the variables
    float result;
    
    result = a / b;         // integer division
    printf("Test 1: Result is %f\n", result);
    
    result = (float)a / b;  // float division
    printf("Test 2: Result is %f\n", result);
    
    result = a / (float)b;  // float division
    printf("Test 3: Result is %f\n", result);
    
    result = (float)(a/b);  // integer division
    printf("Test 4: Result is %f\n", result);    
    

    printf("\n");
    system("PAUSE");
    return 0;    
}
