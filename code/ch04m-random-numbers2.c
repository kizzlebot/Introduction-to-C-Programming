#include<stdio.h>
#include<stdlib.h>

int main() {

    int i;
    srand( time(0) );   // use a seed

    for(i=0; i<10; i++){
        printf("%d, ",  rand()%20 );
    }
    printf("\b\b.");
    





    
        
    printf("\n");
    system("PAUSE");
    return 0;    
}
