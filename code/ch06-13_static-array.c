#include<stdio.h>
#include<stdlib.h>

void rating(int);

int main() {
    int val=0; // initialize different from sentinel=-1
    
    while(val != -1) {
         printf("Enter a score (1 through 5): ");
         scanf("%d", &val);
         rating(val);
    }

        
    printf("\n\n");
    system("PAUSE");
    return 0;    
}

void rating(int n) {
     static int rates[5]={0,0,0,0,0};
     //Rates 1 through 5 will be at indices 0 through 4
     static int counter=0;
     int i;
     
     // Increment the rate
     if(n>=1 && n<=5) {
             rates[n-1]++;
             counter++;
     }
     
     else if(n == -1) {
          printf("\nNumber of answers received: %d\n", counter);
          printf("-------------------------------\n");          
          for(i=0; i<=4; i++)
             printf("Score=%d, the frequency is: %.2lf%\n", i+1, (float)rates[i]/counter*100);
     }
     return;
}

