#include<stdio.h>
#include<stdlib.h>

int increment_by_one(int *, int *);

int main() {
    int a, b;
    
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    
    increment_by_one(&a, &b);
    
    printf("\nThe two variables are now: %d and %d\n", a, b);

    
    printf("\n\n");
    system("PAUSE");
    return 0;    
}
//************************************
int increment_by_one(int *x, int *y) {
    (*x)++;
    (*y)++;
    return;
}
