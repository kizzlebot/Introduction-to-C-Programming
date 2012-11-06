#include<stdio.h>
#include<stdlib.h>

int main() {
    int array[3][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };
    int i, j, counter;

    printf("Printing the array row-by-row\n");
    printf("-----------------------------\n");
    
    // Printing the array row-by-row
    for(i=0; i<3; i++) {
      printf("Row %d:\t", i);

      for(j=0; j<4; j++)
        printf("%2d ", array[i][j]);

      printf("\n");
    }

    printf("\nPrinting the array column-by-column\n");
    printf("-----------------------------------\n");

    // Printing the array column-by-column
    for(i=0; i<4; i++) {
      printf("Column %d:\t", i);

      for(j=0; j<3; j++)
        printf("%2d ", array[j][i]);

      printf("\n");
    }
        
    printf("\n\n");
    system("PAUSE");
    return 0;    
}
