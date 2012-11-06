#include<stdio.h>

int main() {
    int num, x;
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    x = num % 2;      // modulo operation. gives the remainder of the division num/2
    
    if(x == 0)
    printf("The number you entered, %d, is even.\n", num);
    
    if(x == 1)
    printf("The number you entered, %d, is odd.\n", num);

    
    printf("\n");
    system("PAUSE");
    return 0;    
}
