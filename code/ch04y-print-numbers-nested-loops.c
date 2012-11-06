#include<stdio.h>
#include<stdlib.h>

int main() {
    int i, j;
    
    for(i=0; i<=90; i=i+10) {
        for(j=i; j<=i+9; j++)
             printf("%2d ", j);
        
        printf("\n");
    }
    
    

    
        
    printf("\n\n");
    system("PAUSE");
    return 0;    
}
