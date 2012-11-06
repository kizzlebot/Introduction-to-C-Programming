#include<stdio.h>
#include<stdlib.h>
#define SIZE 100000

void insertionSort (int [], int);

int main() {
    srand(time(NULL));
    int array[SIZE];
    int i, val;
    
    printf("This is the original array: \n");
    for(i=0; i<SIZE; i++) {
             val = rand() %101;
             array[i] = val;
             printf("%d  ", val);
    }
    
    // Sorting the array
    insertionSort(array, SIZE);
    
    printf("\n\nThis is the array after sorting: \n");
    for(i=0; i<SIZE; i++)
         printf("%d  ", array[i]);


        
    printf("\n\n");
    system("PAUSE");
    return 0;    
}
//******************************************************************
void insertionSort (int arr[], int size){
	int i, j, temp;

	for(i=0; i<size; i++) {
		for(j=i; j<size; j++) {  // The loop starts at �i�
			if(arr[j] < arr[i]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	return;
}
