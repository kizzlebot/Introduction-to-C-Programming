#include<stdio.h>
#include<stdlib.h>

int main() {

int n;

// Print 1 to 100
for(n=1; n<=100; n++)
    printf("%d ", n);

printf("\n***************************\n\n");
 
// Print 1 to 100 again
for(n=1; n<=100; n=n+1)	// ‘n=n+1’ instead of ‘n++’
    printf("%d ", n);

printf("\n***************************\n\n");    

// Print 1 to 100 again
for(n=0; n<=99; n++)		// 0 to 99 instead of 1 to 100
	printf("%d ", n+1);	// now, we print ‘n+1’ here

printf("\n***************************\n\n");

// Print 1 to 100 again
for(n=1; n<101; n=n+1)	// condition is ‘n<101’ instead of ‘n<=100’
	printf("%d ", n);

        
    printf("\n\n");
    system("PAUSE");
    return 0;    
}
