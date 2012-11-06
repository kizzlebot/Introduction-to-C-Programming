#include<stdio.h>
#include<stdlib.h>
#include "myheader.h"

int main() {
    int num1, num2, result;
    printf("Enter two integers: ");
    scanf("%d%d", &num1, &num2);
    result = max(num1, num2);
    printf("The largest value is: %d\n", result);

        
    printf("\n\n");
    system("PAUSE");
    return 0;    
}

int max(int x, int y){
    if (x >= y)
    return x;
    else return y;
}
