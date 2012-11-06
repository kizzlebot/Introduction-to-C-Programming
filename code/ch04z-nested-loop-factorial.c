#include<stdio.h>
#include<stdlib.h>

int main() {
    int n=0, counter;
    unsigned int answer;   // initialize n
    
    while(!(n==-1)) {
        printf("Enter an integer: ");
        scanf("%d", &n);
        
        answer=1;   // initialize answer
        for(counter=1; counter<=n; counter++)
            answer *= counter;
        
        printf("The factorial of %d is equal to: %u\n\n", n, answer);
    }

    
        
    printf("\n\n");
    system("PAUSE");
    return 0;    
}
