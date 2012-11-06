// Code to sum the even integers between 0 and 100
#include<stdio.h>
#include<stdlib.h>

int main() {
    int i, sum=0;
    
    for(i=0; i<=100; i+=2)
             sum += i;
    
    printf("The sum of even integers between 0 and 100 is: %d\n", sum);    

    
        
    printf("\n\n");
    system("PAUSE");
    return 0;    
}
