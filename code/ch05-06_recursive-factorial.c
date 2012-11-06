#include<stdio.h>
#include<stdlib.h>

unsigned long long int factorial(int);

int main() {
    int x;
    unsigned long long int val;
    printf("Enter an integer: ");
    scanf("%d", &x);
    val = factorial(x);
    printf("Factorial: %d! = %llu\n", x, val);

    
    printf("\n\n");
    system("PAUSE");
    return 0;    
}

unsigned long long int factorial(int n) {
         unsigned long long int result;
         
         if(n <= 1)
              result = 1;
         else result = n * factorial(n-1);
         
         return result;
}


