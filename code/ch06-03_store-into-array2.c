#include<stdio.h>
#include<stdlib.h>
#define SIZE 8

int main() {
    int arr[SIZE];
    int i;
    
    for(i=0; i<=SIZE-1; i++) {
             printf("%d. Enter an integer: ", i+1);
             scanf("%d", &arr[i]);
    }
    
    printf("\n\nLet's print the array: ");
    for(i=0; i<=SIZE-1; i++)
        printf("%d ", arr[i]);

              


        
    printf("\n\n");
    system("PAUSE");
    return 0;    
}

