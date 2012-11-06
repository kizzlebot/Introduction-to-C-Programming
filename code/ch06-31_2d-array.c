#include<stdio.h>
#include<stdlib.h>

int main() {
    int array[3][5] = { {0,1,12,43,34}, {17,6,15,81,70}, {44,35,23,14,10} };
    int i, j;
    
    for(i=0; i<3; i++) {
      for(j=0; j<5; j++)
        printf("Array[%d][%d] = %d\n", i, j, array[i][j]);
      
      printf("\n");
    }

        
    printf("\n\n");
    system("PAUSE");
    return 0;    
}
