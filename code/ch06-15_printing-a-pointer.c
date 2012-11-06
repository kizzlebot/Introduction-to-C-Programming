#include<stdio.h>
#include<stdlib.h>

int main() {
    int n=30;
    int arr[3] = {10, 20, 30};
    int i;
    
    printf("The value of n is: %d\n", n);
    printf("The address of n is: %p\n\n", &n);
    
    for(i=0; i<=2; i++)
        printf("The element arr[%d]=%d is at address: %p\n", i,arr[i],&arr[i]);
        
    printf("\nSize of integer on this computer is: %d\n\n", sizeof(int));
    
    printf("The array starts at address: %p\n", arr);
    printf("The array starts at address: %p\n", &arr);    
    
    


    



        
    printf("\n\n");
    system("PAUSE");
    return 0;    
}
