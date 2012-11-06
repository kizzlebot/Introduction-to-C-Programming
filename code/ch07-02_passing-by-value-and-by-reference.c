#include<stdio.h>
#include<stdlib.h>

int max_by_value(int, int);
int max_by_reference(int *, int *);

int main() {
    int a, b, val;
    
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    
    val = max_by_value(a, b);
    printf("\nCalling max_by_value... The maximum value is %d\n", val);

    val = max_by_reference(&a, &b);
    printf("Calling max_by_reference... The maximum value is %d\n", val);

    
    printf("\n\n");
    system("PAUSE");
    return 0;    
}
//******************************
int max_by_value(int x, int y) {
    if(x > y)    return x;
    else         return y;
}
//************************************
int max_by_reference(int *x, int *y) {
    if(*x > *y)  return *x;
    else         return *y;
}
