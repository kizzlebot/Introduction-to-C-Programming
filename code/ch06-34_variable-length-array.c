#include<stdio.h>
#include<stdlib.h>

int main() {
    int i, size;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int array[size];
    
    for(i=0; i<size; i++)
      array[i] = i;
    
    for(i=0; i<size; i++)
      printf("Array[%d] = %d\n", i, array[i]);  
    

        
    printf("\n\n");
    system("PAUSE");
    return 0;    
}
