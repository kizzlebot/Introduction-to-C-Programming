// Exercise 3.24 in book

#include<stdio.h>
#include<stdlib.h>

int main() {
    int n;
    
    n = 1; // initialization
    
    printf("N\t10*N\t100*N\t1000*N\n\n");
    
    while(n <= 10) {
            printf("%d\t%d\t%d\t%d\n",n, n*10, n*100, n*1000);
            n++;
    }
    
    
    
        
    printf("\n");
    system("PAUSE");
    return 0;    
}
