#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

int main() {
    srand(time(0));
    int arr[SIZE];
    int i, key, index;
        
    // Fill the array with random numbers
    for(i=0; i<SIZE; i++)
             arr[i] = rand()%21;
    
    printf("What value would you like to search for? (between 0 and 20) ");
    scanf("%d", &key);
    
    index=-1;// this means the key is not found
    
    for(i=0; i<SIZE; i++)
             if(arr[i] == key)
                 index = i;
    
    if(index == -1)
        printf("The value %d was not found in the array.\n", key);
    else printf("The value %d was found in the array at index %d.\n", key, index);
    
    printf("\n\nThis is the array:\n");
    printf("Index: ");
    for(i=0; i<SIZE; i++)
        printf("%2d ", i);
    printf("\nValue: ");
    for(i=0; i<SIZE; i++)
        printf("%2d ", arr[i]);
    
             


        
    printf("\n\n");
    system("PAUSE");
    return 0;    
}

