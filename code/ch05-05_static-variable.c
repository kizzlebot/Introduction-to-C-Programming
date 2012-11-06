#include<stdio.h>
#include<stdlib.h>

void myfunction();

int main() {

    myfunction();
    myfunction();    
    
    
    
    printf("\n\n");
    system("PAUSE");
    return 0;    
}

void myfunction() {
     static int n=0;
     n++;
     printf("The value of n is: %d\n", n);
}


