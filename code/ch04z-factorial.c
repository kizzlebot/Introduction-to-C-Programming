#include<stdio.h>
#include<stdlib.h>

int main() {
    int n, counter;
    unsigned int answer=1;   // initialize answer to 1
    
//    printf("Size of int is: %d\n", sizeof(int) );
//    printf("Size of unsigned int is: %d\n", sizeof(unsigned int) );
    
    printf("Enter an integer: ");
    scanf("%d", &n);
    
    for(counter=1; counter<=n; counter++)
        answer *= counter;
        
    printf("\nThe factorial of %d is equal to: %u\n", n, answer);

    
        
    printf("\n\n");
    system("PAUSE");
    return 0;    
}
