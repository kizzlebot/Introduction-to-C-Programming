#include<stdio.h>
#include<stdlib.h>

void print_array(int[], int);
void reverse_array(int [], int [], int);

int main() {
    int array1[5] = {10, 20, 30, 40, 50};
    int array2[5]; // declare another array of size=5
    
    printf("Printing array1...\n");
    print_array(array1, 5);
    
    reverse_array(array1, array2, 5);
    
    printf("\n\nPrinting array2...\n");
    print_array(array2, 5);
        
    printf("\n\n");
    system("PAUSE");
    return 0;    
}
//****************************************************
void reverse_array(int arr1[], int arr2[], int size) {
     int i, j;
     
     j=size-1;
     for(i=0; i<size; i++) {
              arr2[i] = arr1[j];
              j--;
     }     
     
     // The code can be written without using j
     //for(i=0; i<size; i++)
     //         arr2[i] = arr1[size-i-1];
     
     return;
}

//*************************************
void print_array(int arr[], int size) {
     int i;
     for(i=0; i<size; i++)
              printf("%d ", arr[i]);
     
     return;
}
