#include<stdio.h>
#include<stdlib.h>
#define SIZE 100000

void bubbleSort (int [], int);

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
    bubbleSort(array, SIZE);
    
    printf("\n\nThis is the array after sorting: \n");
    for(i=0; i<SIZE; i++)
         printf("%d  ", array[i]);


        
    printf("\n\n");
    system("PAUSE");
    return 0;    
}
//************************************
void bubbleSort (int arr[], int size){
	int i, j, temp;

	for(i=1; i<=size; i++) {  // the number of passes is equal to ‘size’
		for(j=0; j<=size-2; j++) {  // notice the upper limit
			if(arr[j] > arr[j+1]) {
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	return;
}
