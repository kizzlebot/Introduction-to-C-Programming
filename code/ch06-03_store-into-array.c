#include<stdio.h>
#include<stdlib.h>

int main() {
    int arr[5];
    int i;
    
    for(i=0; i<=4; i++) {
             printf("%d. Enter an integer: ", i+1);
             scanf("%d", &arr[i]);
    }
    
    printf("\n\nLet's print the array: ");
    for(i=0; i<=4; i++)
        printf("%d ", arr[i]);

              


        
    printf("\n\n");
    system("PAUSE");
    return 0;    
}

