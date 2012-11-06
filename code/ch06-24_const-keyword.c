#include<stdio.h>
#include<stdlib.h>

void myFunction (const int [], int);

int main() {
    int arr[3] = {10, 20, 30};
    int i;
    
    printf("This is the original array: \n");
    for(i=0; i<3; i++) {
        printf("%d  ", arr[i]);
    }
    
    // Sorting the array
    myFunction(arr, 3);
    
    printf("\n\nThis is the array after the function call: \n");
    for(i=0; i<3; i++)
         printf("%d  ", arr[i]);

        
    printf("\n\n");
    system("PAUSE");
    return 0;    
}
//*******************************************
void myFunction (const int arr[], int size) {
     int i;
     
     for(i=0; i<size; i++)
              arr[i] += 1;
              
     return;
}
