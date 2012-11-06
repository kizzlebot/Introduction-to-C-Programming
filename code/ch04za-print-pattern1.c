#include<stdio.h>
#include<stdlib.h>

int main() {
    int n, i, j;
    
    printf("Enter the size: ");
    scanf("%d", &n);
    
    for(i=1; i<=n; i++) {
             for(j=1; j<=i; j++)
             printf("*");
             
             printf("\n");        
    }

    
        
    printf("\n\n");
    system("PAUSE");
    return 0;    
}


/* Print the pattern
*
**
***
****
*****

*/
