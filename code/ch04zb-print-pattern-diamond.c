#include<stdio.h>
#include<stdlib.h>

int main() {
    int n, i, j;
    
    printf("Enter the size: ");
    scanf("%d", &n);
    
    // Print the upper part of the diamond (including the middle line)
    for(i=1; i<=n; i++) {
             for(j=1; j<=n-i; j++)  // print spaces
             printf(" ");
             
             for(j=1; j<=i; j++)    // print stars
             printf("* ");
             
             printf("\n");        
    }
    
    // Print the lower part of the diamond
    for(i=1; i<=n-1; i++) {
             for(j=1; j<=i; j++)  // print spaces
             printf(" ");
             
             for(j=1; j<=n-i; j++)    // print stars
             printf("* ");
             
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
