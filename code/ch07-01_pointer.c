#include<stdio.h>
#include<stdlib.h>

int main() {
    int val;
    int *valPtr;
    
    val = 14;
    valPtr = &val;
    
    printf("Printing with direct referencing: val = %d\n", val);
    printf("Printing with the pointer: val = %d\n\n", *valPtr);
    
    printf("Printing the address of val using &: address = %p\n", &val);
    printf("Printing the address of val using valPtr: address = %p\n", valPtr);
              


        
    printf("\n\n");
    system("PAUSE");
    return 0;    
}

