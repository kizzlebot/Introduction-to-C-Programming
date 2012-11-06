#include<stdio.h>
#include<stdlib.h>

int main() {
    srand(time(0));
    int arr[10];
    int i, sum=0;

    // Fill the array with random numbers between 0 and 100
    for(i=0; i<=9; i++)
             arr[i] = rand()%101;
    
    printf("Let's print the array: ");
    for(i=0; i<=9; i++)
        printf("%d ", arr[i]);

    for(i=0; i<=9; i++)
        sum = sum + arr[i];
        
    printf("\nThe sum of all the elements is: %d\n", sum);
              


        
    printf("\n\n");
    system("PAUSE");
    return 0;    
}

