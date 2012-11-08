#include <stdio.h>
#include <stdlib.h>

// Enumeration Global Declaration
enum Operations={"ADD","SUB"};


int main(){
    //Local Enum Declaration
    enum Operations ops ;
    ops = ADD ;
    
    int in ;  
    in = 0 ;
    printf("How many Terms?: ");
    scanf("%d",&in);
    
    int i ;
    i = 1 ;
    
    float pi ;
    while ( i <= (2*in-1)){
        if (ops == ADD){
            pi+=(1/((float)(2*i-1)));
            ops = SUB ;
        }
        else if(ops == SUB){
            pi-=(1/((float)(2*i-1)));
            ops = ADD ; 
        }
        else{
            break ; 
        }
    }
    printf("\nPi is equal to: %f",pi);
    return 0 ;
}
