#include<stdio.h>
#include<stdlib.h>
#define SIZE 100

float mean_of_array(const int[], int);
float median_of_array(const int[], int);
void selectionSort (int [], int );
void fill_frequency_array(const int [], int, int[], int);
void print_histogram(const int [], int);
void print_modes(const int[], int);

int main() {
    srand(time(NULL));
    int array[SIZE];
    int i;
    float mean, median;
    int frequency_array[10]; // Possible answers are from 0 to 9
    
    printf("This is the original array: \n");
    printf("---------------------------\n");
    for(i=0; i<SIZE; i++) {
             array[i] = (rand()%10);
             printf("%2d  ", array[i]);
             if(i%10==9)
                 printf("\n");
             
    }
        
    mean = mean_of_array(array, SIZE);
    printf("\nThe mean value is: %.2f\n", mean);
    
    median = median_of_array(array, SIZE);
    printf("The median value is: %.2f\n\n", median);
    
    fill_frequency_array(array, SIZE, frequency_array, 10);
    
    print_histogram(frequency_array, 10);
    
    printf("\n");
    print_modes(frequency_array, 10);

        
    printf("\n\n");
    system("PAUSE");
    return 0;    
}
//*******************************************************
void print_modes(const int frequency_array[], int size) {
     int i, largest_frequency;
     
     // Find the largest frequency
     largest_frequency = frequency_array[0];
     for(i=0; i<size; i++)
       if(frequency_array[i] > largest_frequency)
         largest_frequency = frequency_array[i];
         
     // Print all the scores that have the largest frequency
     for(i=0; i<size; i++) {
              if(frequency_array[i] == largest_frequency)
                printf("The score %d is a mode. It occurred %d times.\n", i, frequency_array[i]);
     }
     return;
}
//***********************************************************
void print_histogram(const int frequency_array[], int size) {
     int i, j;
     
     printf("%6s%11s \n", "Score", "Frequency");
     printf("-----------------\n");
     
     for(i=0; i<size; i++) {
              printf("%6d%11d  ", i, frequency_array[i]);
              for(j=0; j<frequency_array[i]; j++)
                printf("*");
              printf("\n");
     }
     return;
}
//*****************************************************************************************
void fill_frequency_array(const int array[], int size1, int frequency_array[], int size2) {
     int i;

     // Reset the frequency array to 0
     for(i=0; i<size2; i++)
         frequency_array[i] = 0;

     // Fill the frequency array
     for(i=0; i<size1; i++)
         frequency_array[ array[i] ]++;
     
     return;
}
//************************************************
float median_of_array(const int arr[], int size) {
      int sorted_array[SIZE];
      int i, index;
      float median;
      
      // Copy arr into 'sorted_array'
      for(i=0; i<size; i++)
          sorted_array[i] = arr[i];
      
      selectionSort(sorted_array, size);
      
      if(size%2 == 1) { // case of odd size
          index = (size-1)/2;
          median = sorted_array[index];
      }
      else { // case of even size
           index = (size/2)-1;
           median = (float)(sorted_array[index] + sorted_array[index+1])/2;
      }
      
      return median;
}
//**********************************************
float mean_of_array(const int arr[], int size) {
      float result;
      int i, total;
      
      total=0;
      
      for(i=0; i<size; i++)
          total += arr[i];
          
      result = (float)total / size;

      return result;
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
