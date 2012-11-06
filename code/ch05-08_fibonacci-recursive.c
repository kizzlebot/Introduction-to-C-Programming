#include<stdio.h>
#include<stdlib.h>

int fibonacci_term(int);

int main() {
    int n, val;
    printf("Which fibonacci term do you want? ");
    scanf("%d", &n);
    //printf("DEBUG: n=%d\n", n);
    
    if(n<0)
         printf("Invalid input!\n");
    else if(n==0)
         val=0;
    else if(n==1)
         val=1;
    else val = fibonacci_term(n);
    printf("The fibonacci term number %d is: %d\n", n, val);

    
    printf("\n\n");
    system("PAUSE");
    return 0;    
}

int fibonacci_term(int n) {
    //printf("DEBUG: in-function: n=%d\n", n);
    int result;
    
    if(n==0)
         result = 0;
    else if(n==1)
         result = 1;
    else result = fibonacci_term(n-1) + fibonacci_term(n-2);

    //printf("DEBUG: in-function: result=%d\n", result);
    return result;
}


