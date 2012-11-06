#include<stdio.h>
#include<stdlib.h>

int counter=0;
void myfunction();

int main() {
    counter++;
    printf("Printing from main: %d\n", counter);
    myfunction();
    counter++;
    printf("Printing from main: %d\n", counter);
    
    
    printf("\n\n");
    system("PAUSE");
    return 0;    
}

void myfunction() {
     counter++;
     printf("Printing from the function: %d\n", counter);
}


/* Print the pattern
*****
 ****
  ***
   **
    *
             */
