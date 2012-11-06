#include<stdio.h>
#include<stdlib.h>

int main() {
    int height, width;
    int i, j; //counters
    
    printf("Enter height and width: ");
    scanf("%d %d", &height, &width);
    
    for(i=1; i<=height; i++) {
      for(j=1; j<=width; j++)
        printf("*");
        
      printf("\n");
   }
    

    
        
    printf("\n");
    system("PAUSE");
    return 0;    
}
