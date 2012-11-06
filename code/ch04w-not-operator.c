#include<stdio.h>
#include<stdlib.h>

// Keep reading numbers until we get a positive (>0) even number

int main() {
    int n;
    n = 1; // initialize to something that makes the condition false
    
    while( !(n>0 && n%2==0) ) {
           printf("Enter an integer: ");
           scanf("%d", &n);
           }
           
    printf("\n*********************\n");
    printf("The condition is met!\n\
The number %d is positive and even.\n", n);
    

             
    

    
        
    printf("\n\n");
    system("PAUSE");
    return 0;    
}
