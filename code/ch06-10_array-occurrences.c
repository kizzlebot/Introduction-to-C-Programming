#include<stdio.h>
#include<stdlib.h>
#define SIZE 1000000

int main() {
    srand(time(0));
    int arr[SIZE];
    int i, key;
        
    // Fill the array with random numbers
    for(i=0; i<SIZE; i++)
             arr[i] = rand()%101;
    
    printf("What value would you like to search for? (between 0 and 100) ");
    scanf("%d", &key);
   
   printf("\n");
   
    for(i=0; i<SIZE; i++) {
             if(arr[i] == key)
                 printf("The value %d was found at index %d\n", key, i);
    }
             


        
    printf("\n\n");
    system("PAUSE");
    return 0;    
}

