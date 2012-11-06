#include<stdio.h>
#include<stdlib.h>
#include<math.h>        // include this file to use math.h functions

int main() {
    float a, b=12.33;
    
    a = (float) ceil ((double) b);
    printf("a is %f\n", a );

    a = 0;
    
    a = ceil (b);
    printf("a is %f\n", a );
    
    
    

    
        
    printf("\n");
    system("PAUSE");
    return 0;    
}
