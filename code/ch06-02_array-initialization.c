#include<stdio.h>
#include<stdlib.h>

int main() {
    //int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr[10] = {1, 2, 3, 4, 5}; // the remaining elements will be zero
    int i;
    
    printf("Printing the array:\n");
    printf("-------------------\n");
    for(i=0; i<=9; i++)
        printf("%d ", arr[i]);

              


        
    printf("\n\n");
    system("PAUSE");
    return 0;    
}

