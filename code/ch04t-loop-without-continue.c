#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main() {
    int num, i;
    float val;
    
    for(i=1; i<=5; i++) {
             printf("%d. Enter the number: ", i);
             scanf("%d", &num);
             
             if(num >= 0) {
                    val = sqrt(num);
                    printf("The square root of %d is %f\n\n", num, val);
             }
             
             else printf("This number is negative.\n\n");
    }

        
    printf("\n");
    system("PAUSE");
    return 0;    
}
