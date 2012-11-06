// Exercise 3.36 in book

#include<stdio.h>
#include<stdlib.h>

int main() {
    int n=1;
    
    while(n <= 1000000000) {
            if(n%100000000 == 0)    // Change this to 200,000,000, it becomes slower
            printf("n = %d\n", n);
            
            n++;
    }
            
    
    
    
        
    printf("\n");
    system("PAUSE");
    return 0;    
}
