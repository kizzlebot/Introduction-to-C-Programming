#include<stdio.h>
#include<stdlib.h>

int main() {
    int * array;
    int i, size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    // Allocating memory
    array = (int *) malloc (size*sizeof(int));
    
    // Making sure the memory was allocated successfully
    if(array==NULL) {
          printf("Error! Out of Memory!\n");
          return 1;
    }
    
    for(i=0; i<size; i++)
      array[i] = i*10;
    
    for(i=0; i<size; i++)
      printf("Array[%d] = %d\n", i, array[i]);  
    
    // Freeing the allocated memory
    free(array);

        
    printf("\n\n");
    system("PAUSE");
    return 0;    
}
