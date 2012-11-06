#include<stdio.h>
#include<stdlib.h>
#include<math.h>        // include this file to use math.h functions

int main() {
    double x, y;
    
    // The constant Pi is defined
    printf("Pi is equal to %f\n", M_PI);
    
    x=2; y=10;
    printf("2 to the power 10 is equal to %f\n", pow(2,10) );
    
    x=1000;
    printf("Square root of 1000 is equal to %f\n", sqrt(1000) );
    
    x=17.44;
    printf("x is %f. Let's round up, it becomes %f\n", x, ceil(x) );
    printf("x is %f. Let's round down, it becomes %f\n", x, floor(x) );
    
    
    

    
        
    printf("\n");
    system("PAUSE");
    return 0;    
}
