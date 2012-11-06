// Exercise 3.25 in book

#include<stdio.h>
#include<stdlib.h>

int main() {
    int a;
    
    a = 3; // initialization
    
    printf("A\tA+2\tA+4\tA+6\n\n");
    
    while(a <= 15) {
            printf("%d\t%d\t%d\t%d\n",a, a+2, a+4, a+6);
            a += 3;
    }
    
    
    
        
    printf("\n");
    system("PAUSE");
    return 0;    
}
