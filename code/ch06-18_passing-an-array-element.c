#include<stdio.h>
#include<stdlib.h>

void myfunction(int);

int main() {
    int arr[3] = {10, 20, 30};
    
    printf("Printing arr[1] from main: %d\n", arr[1]);
    myfunction(arr[1]);
    printf("Printing arr[1] from main: %d\n", arr[1]);    

        
    printf("\n\n");
    system("PAUSE");
    return 0;    
}


void myfunction(int x) {
     x++;
     printf("Printing the value from the function: %d\n", x);
     return;
}
