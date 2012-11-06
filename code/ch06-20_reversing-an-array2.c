#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

void print_array(int[], int);
void reverse_array(int [], int);

int main() {
    int array[SIZE] = {10, 20, 30, 40, 50};
    
    printf("The array size is: %d\n\n", SIZE);
    
    printf("Printing the original array...\n");
    print_array(array, SIZE);
    
    reverse_array(array, SIZE);
    
    printf("\n\nPrinting after calling the function...\n");
    print_array(array, SIZE);
        
    printf("\n\n");
    system("PAUSE");
    return 0;    
}
//****************************************************
void reverse_array(int arr[], int size) {
     int limit_i, i, j, temp;
     
     if(size==1) // nothing should be done in this case
     return;
     
     if(size%2 == 0)      // size is even
               limit_i = (size/2)-1;
     else
               limit_i = (size-3)/2;
     
     //Loop to reverse the array
     j = size-1;
     for(i=0; i<=limit_i; i++) {
              temp = arr[i];
              arr[i] = arr[j];
              arr[j] = temp;
              j--;
     }
     return;
}

//*************************************
void print_array(int arr[], int size) {
     int i;
     for(i=0; i<size; i++)
              printf("%d ", arr[i]);
     
     return;
}
