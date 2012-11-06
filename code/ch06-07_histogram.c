#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

int main() {
    int arr[SIZE];
    int i, j;
        
    // Fill the array
    for(i=0; i<SIZE; i++) {
             printf("%d. Enter an integer: ", i+1);
             scanf("%d", &arr[i]);
    }
    
    printf("\n%8s%8s   %s\n", "Element", "Value", "Histogram");
    printf("------------------------------\n");
        
    for(i=0; i<SIZE; i++) {
             printf("%8d%8d   ", i, arr[i]);
             for(j=1; j<=arr[i]; j++)
                      printf("*");
             printf("\n");
    }
             


        
    printf("\n\n");
    system("PAUSE");
    return 0;    
}

