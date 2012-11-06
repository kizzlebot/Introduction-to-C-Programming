#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

int main() {
    srand(time(0));
    int arr[SIZE];
    int i, max;
        
    // Fill the array with random numbers and print it
    printf("These are the elements in the array:\n");
    for(i=0; i<SIZE; i++) {
             arr[i] = rand()%101;
             printf("%d ", arr[i]);
    }
    
    // Initialize max
    max = 0;
    
    // Loop and find the maximum value
    for(i=0; i<SIZE; i++) {
             if(arr[i] > max)
                 max = arr[i];
    }
    
    printf("\n\nThe maximum vaule is: %d\n", max);
    
             


        
    printf("\n\n");
    system("PAUSE");
    return 0;    
}

