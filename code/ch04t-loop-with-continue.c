#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main() {
    int num, i;
    float val;
    
    for(i=1; i<=5; i++) {
             printf("%d. Enter the number: ", i);
             scanf("%d", &num);
             
             if(num <0) {
                    printf("This number is negative.\n\n");
                    continue;
             }
             
             val = sqrt(num);
             printf("The square root of %d is %f\n\n", num, val);
    }

        
    printf("\n");
    system("PAUSE");
    return 0;    
}
