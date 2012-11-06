#include<stdio.h>
#include<stdlib.h>

void my_function(int, int, int *, int *);

int main() {
    int a, b, add, sub;
    
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    
    my_function(a, b, &add, &sub);
    
    printf("\nThe addition is: %d\nThe subtraction is: %d\n", add, sub);

    
    printf("\n\n");
    system("PAUSE");
    return 0;    
}
//*******************************************************
void my_function(int a, int b, int *add, int *sub) {
     *add = a + b;
     *sub = a - b;
    return;
}
