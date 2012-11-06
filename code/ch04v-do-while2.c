#include<stdio.h>
#include<stdlib.h>

int main() {
    int n, sum=0;
    
    do {
        printf("Enter an integer: ");
        scanf("%d", &n);
        
        sum += n;
        } while(sum < 100);
        
    printf("The sum of all the numbers entered is: %d\n", sum);
             
    

    
        
    printf("\n\n");
    system("PAUSE");
    return 0;    
}
