#include<stdio.h>
#include<stdlib.h>

int main() {
    int i, j, k;
    int max=50;
    int counter=0; // counts how many right triangles were found
    
    printf("%8s%8s%14s\n", "Side1", "Side2", "Hypotenuse");
    printf("------------------------------\n");
    
    for(i=1; i<=max; i++)
     for(j=i; j<=max; j++)
      for(k=1; k<=max; k++) {
        if( (i*i+j*j)== (k*k) ) {
            printf("%8d%8d%14d\n", i, j, k);
            counter++;
        }
      }
      
    printf("There are %d right triangles.\n", counter);


    
        
    printf("\n\n");
    system("PAUSE");
    return 0;    
}


/* Print the pattern
*****
 ****
  ***
   **
    *
             */
