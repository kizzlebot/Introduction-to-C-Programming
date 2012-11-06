#include<stdio.h>
#include<stdlib.h>
#define SIZE 100

void selectionSort (int [], int);
int binary_search (int[], int, int);

int main() {
    srand(time(NULL));
    int array[SIZE];
    int i, key, index;
    
    // Fill the array with random numbers
    for(i=0; i<SIZE; i++)
       array[i] = rand() %100;
    
    // Sorting the array
    selectionSort(array, SIZE);

    // Fill the array with random numbers
    printf("This is the sorted array:\n");
    printf("-------------------------\n");
    for(i=0; i<SIZE; i++) {
             if(i%10==0)
               printf("Index %2d: ", i);
             printf("%2d ", array[i]);
             if(i%10==9)
               printf("\n");
    }
    
    printf("\n\nWhat value would you like to search for? ");
    scanf("%d", &key);
    
    index = binary_search(array, SIZE, key);
    
    if(index == -1)
      printf("The value %d was not found in the array!\n", key);
    else printf("The key=%d was found at index %d\n", key, index);


        
    printf("\n\n");
    system("PAUSE");
    return 0;    
}
//**************************************************
/* This function returns the index of the element that's equal to the key,
if any. If the key is not found in the array, it returns -1.
*/
int binary_search (int array[], int size, int key) {
    int low, high, middle;
    
    low=0;
    high = size-1;
    
    while(low <= high) {
          middle = (low+high)/2;
          
          if(key == array[middle])
            return middle;
          else if(key < array[middle]) // search in the right half
               high = middle - 1;
          else if(key > array[middle]) // search in the left half
               low = middle + 1;
    }
    
    return -1;
}
//***************************************
void selectionSort (int arr[], int size){
     int i, j, temp;
     
     for(i=0; i<size; i++) {
         for(j=i; j<size; j++) {
             if(arr[j] < arr[i]) {
                 temp = arr[i];
                 arr[i] = arr[j];
                 arr[j] = temp;
             }
         }
     }
     
     return;
}
