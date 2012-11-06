#include<stdio.h>

int main() {
    int num, x;
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    x = num / 2;              // integer division
    x = x * 2;
    
    if(x == num)
    printf("The number you entered, %d, is even.\n", num);
    
    if(x != num)
    printf("The number you entered, %d, is odd.\n", num);

    
    printf("\n");
    system("PAUSE");
    return 0;    
}
