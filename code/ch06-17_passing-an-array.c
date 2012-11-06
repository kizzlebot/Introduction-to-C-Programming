#include<stdio.h>
#include<stdlib.h>

void increment_array(int [], int);

int main() {
    int arr[3] = {10, 20, 30};
    int i;
    
    printf("Printing the array from main before function call\n");
    for(i=0; i<3; i++)
             printf("The element arr[%d] = %d\n", i, arr[i]);
    
    increment_array(arr, 3);
    
    printf("\nPrinting the array from main after function call\n");
    for(i=0; i<3; i++)
             printf("The element arr[%d] = %d\n", i, arr[i]);

        
    printf("\n\n");
    system("PAUSE");
    return 0;    
}


void increment_array(int arr[], int size) {
     int j;
     
     for(j=0; j<size; j++)
              arr[j]++;
     
     return;
}
