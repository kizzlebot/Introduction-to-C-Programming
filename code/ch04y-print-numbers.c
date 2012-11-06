#include<stdio.h>
#include<stdlib.h>

int main() {
    int i;
    
    for(i=0; i<=99; i++) {
             printf("%2d ", i);
             
             if(i%10==9)
             printf("\n");
    }
    
    

    
        
    printf("\n\n");
    system("PAUSE");
    return 0;    
}
