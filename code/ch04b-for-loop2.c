#include<stdio.h>
#include<stdlib.h>

int main() {
    int n;
    
    // Print even numbers from 100 down to 0
    for(n=100; n>=0; n=n-2)
        printf("%d ", n);
    
        
    printf("\n");
    system("PAUSE");
    return 0;    
}
