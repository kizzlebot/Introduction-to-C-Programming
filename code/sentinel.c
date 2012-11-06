/* This program keeps reading values from the user until the user
enters the sentinel value of -1. When -1 is entered, the program
terminates. */
#include<stdio.h>
#include<stdlib.h>

int main() {
    int x;
    
    x = 3; // declare x to anything that's different from -1

    // We don't need the brackets here since there's only one
    // statement in the loop.
    while(x != -1)
        scanf("%d", &x);
    

    printf("\n");
    system("PAUSE");
    return 0;    
}
