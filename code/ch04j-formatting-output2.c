#include<stdio.h>
#include<stdlib.h>

int main() {
    int i;
    
    for(i=1; i<=5; i++)
        printf("%-30d%-20d%-10d\n", i, i*10, i*100);
    

    
        
    printf("\n");
    system("PAUSE");
    return 0;    
}
