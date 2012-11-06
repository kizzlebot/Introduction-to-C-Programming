#include<stdio.h>
#include<stdlib.h>

int main() {
    int n, i, j;
    
    printf("Enter the size: ");
    scanf("%d", &n);
    
    for(i=1; i<=n; i++) {
             // Print spaces
             for(j=1; j<=i-1; j++)
             printf(" ");
             
             // Print stars
             for(j=1; j<=n-i+1; j++)
             printf("*");
             
             printf("\n");        
    }

    
        
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
