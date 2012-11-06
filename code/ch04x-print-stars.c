#include<stdio.h>
#include<stdlib.h>

int main() {
    int num, i;
    
    printf("How many stars do you want to print? ");
    scanf("%d", &num);
    printf("\n");
    
    for(i=0; i<=num-1; i++)
    printf("*");
    

    
        
    printf("\n\n");
    system("PAUSE");
    return 0;    
}
