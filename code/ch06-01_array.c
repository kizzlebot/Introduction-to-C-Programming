#include<stdio.h>
#include<stdlib.h>

int main() {
    int arr[20];
    int i;
    
    printf("Printing right after declaration:\n");
    printf("---------------------------------\n");
    for(i=0; i<=19; i++)
        printf("%d ", arr[i]);

    for(i=0; i<=19; i++)
        arr[i] = 0;

    printf("\n\nPrinting right after initialization:\n");
    printf("------------------------------------\n");
    for(i=0; i<=19; i++)
        printf("%d ", arr[i]);
              


        
    printf("\n\n");
    system("PAUSE");
    return 0;    
}

