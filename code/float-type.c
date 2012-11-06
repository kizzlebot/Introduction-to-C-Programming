#include<stdio.h>
#include<stdlib.h>

int main() {
    float a, b, c;
    
    printf("Enter two floating-point numbers: ");
    scanf("%f %f", &a, &b);
    // Use %f conversion specifier
    
    c = a / b;   // floating-point division
    
    printf("The division is: %f\n", c);
    printf("The division is: %.2f\n", c);
    printf("The division is: %.3f\n", c);
    printf("The division is: %e\n", c);


    printf("\n");
    system("PAUSE");
    return 0;    
}
