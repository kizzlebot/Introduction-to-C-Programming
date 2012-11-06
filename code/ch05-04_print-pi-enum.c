#include<stdio.h>
#include<stdlib.h>

// Approximating 'pi'
// pi = 4* (1-1/3+1/5-1/7+1/9...)

enum Sign {ADD, SUB};

int main() {
    int i, n;
    float answer;
    enum Sign var1;
    
    printf("How many terms? ");
    scanf("%d", &n);
    
    i=1;
    answer = 0;
    var1 = ADD;  // 1: add, 0:subtract
    
    while(i<= (n*2-1) ) {
        if(var1==ADD) {
            answer += 1/(float)i;
            var1 = SUB;
        }
        
        else if(var1==SUB) {
             answer -= 1/(float)i;
             var1 = ADD;
        }
        
        i += 2;
    }
    
    answer = 4*answer;
    
    printf("The value of pi is: %f\n", answer);
    
    
    printf("***************\n");
    var1=ADD;
    printf("Value ADD is: %d\n", var1);
    var1=SUB;
    printf("Value SUB is: %d\n", var1);

    
    

    
        
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
