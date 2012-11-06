#include<stdio.h>
#include<stdlib.h>

// Approximating 'pi'
// pi = 4* (1-1/3+1/5-1/7+1/9...)

int main() {
    int i, n, sign;
    float answer;
    
    printf("How many terms? ");
    scanf("%d", &n);
    
    i=1;
    answer = 0;
    sign=1;  // 1: add, 0:subtract
    
    while(i<= (n*2-1) ) {
        if(sign==1) {
            answer += 1/(float)i;
            sign = 0;
        }
        
        else if(sign==0) {
             answer -= 1/(float)i;
             sign = 1;
        }
        
        i += 2;
    }
    
    answer = 4*answer;
    
    printf("The value of pi is: %f\n", answer);
    
    
    
    
    
    

    
        
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
