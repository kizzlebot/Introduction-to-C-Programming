#include<stdio.h>
#include<stdlib.h>

void fibonacci(int);

int main() {
    int n;
    printf("How many fibonacci numbers do you want? ");
    scanf("%d", &n);
    
    if(n<=0)
         printf("Invalid input!\n");
    else if(n==1)
         printf("0");
    else if (n==2)
         printf("0, 1");
    else fibonacci(n);
    

    
    printf("\n\n");
    system("PAUSE");
    return 0;    
}

void fibonacci(int n) {
     int small=0, large=1, counter, sum;
     
     // Printf the two terms: 0, 1
     printf("%d, %d", small, large);

     for(counter=1; counter<=n-2; counter++) {
                    sum = small + large;
                    printf(", %d", sum);
                    small = large;
                    large = sum;
     }
     return;
}


