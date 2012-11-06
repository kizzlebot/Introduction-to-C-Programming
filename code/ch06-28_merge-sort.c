#include<stdio.h>
#include<stdlib.h>
#define SIZE 100

void mergeSort (int [], int, int);
void merge(int[], int, int, int, int);
void printFromArray(int [], int, int);

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
    mergeSort(array, 0, SIZE-1);
    
    printf("\n\nThis is the array after sorting: \n");
    for(i=0; i<SIZE; i++)
         printf("%d  ", array[i]);


        
    printf("\n\n");
    system("PAUSE");
    return 0;    
}
//******************************************************************
void merge(int arr[], int left1, int right1, int left2, int right2){
     int temp_array[SIZE]; // a temporary array
     int index1, index2, i;
     
     // *********** FOR DEBUGGING *************
     //printFromArray(arr, left1, right1);
     //printFromArray(arr, left2, right2);
     
     index1 = left1;
     index2 = left2;
     
     i=0;
     while(index1<=right1 && index2<=right2) {
           if(arr[index1] < arr[index2]) {
                 temp_array[i] = arr[index1];
                 index1++;
           }
           else {
                temp_array[i] = arr[index2];
                index2++;
           }
           i++;
     }
     
     while(index1<=right1) {
           temp_array[i] = arr[index1];
           index1++;
           i++;
     }

     while(index2<=right2) {
           temp_array[i] = arr[index2];
           index2++;
           i++;
     }

     // Now let's copy from temp_array into arr
     i = 0;
     index1 = left1;
     while(index1 <= right2){
             arr[index1] = temp_array[i];
             index1++;
             i++;
     }

     // *********** FOR DEBUGGING *************
     //printFromArray(arr, left1, right2);
     //printf("\n");     

     return;
}
//**************************************************
void mergeSort (int arr[], int left, int right){
     int left1, right1, left2, right2, size;
     
     if(left==right) // array size =1
     return;
     
     size = right-left+1;
     
     left1 = left;
     right1 = (size/2)-1 + left1;
     
     left2 = right1+1;
     right2 = right;
     
     mergeSort(arr, left1, right1);
     mergeSort(arr, left2, right2);
     merge(arr, left1, right1, left2, right2);
     
     return;
}

//*************************************
void printFromArray(int arr[], int a, int b) {
     int i;

     printf("\n");
     
     for(i=a; i<=b; i++)
         printf("%d ", arr[i]);
     
     return;
}
     
