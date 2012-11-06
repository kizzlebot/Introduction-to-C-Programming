// The program computes the yield of apples.
#include<stdio.h>
#include<stdlib.h>

int main() {
    int i, yield=1000; // yield of 1st year is 1000 lbs
    
    for(i=1; i<=7; i=i+1) {
        printf("The yield of year %d is %d lbs of apples.\n", i, yield);
        yield = yield * 1.05;
    }

    
        
    printf("\n");
    system("PAUSE");
    return 0;    
}
