#include<stdio.h>
#include<stdlib.h>

// Global variables can be accessed in main
// and in the other functions
int c1=0, c2=0, c3=0, c4=0, c5=0, c6=0;

void roll_dice(void);

int main() {
    srand(time(0));
    int i;
    int num = 1000000;
    
    for(i=0; i<=num; i++)
             roll_dice();
    
    printf("Number of dice rolls is: %d\n\n", num);
    printf("Probability of 1 is: %.2f\n", (float)c1/num*100);
    printf("Probability of 1 is: %.2f\n", (float)c2/num*100);    
    printf("Probability of 1 is: %.2f\n", (float)c3/num*100);
    printf("Probability of 1 is: %.2f\n", (float)c4/num*100);
    printf("Probability of 1 is: %.2f\n", (float)c5/num*100);
    printf("Probability of 1 is: %.2f\n", (float)c6/num*100);


    printf("\n\n");
    system("PAUSE");
    return 0;    
}

void roll_dice(void){
    int n;
    n = rand() % 6;     // number between 0 and 5
    n = n+1;            // number between 1 and 6
    
    // Accessing the global variables
    if(n==1) c1++;
    else if(n==2) c2++;
    else if(n==3) c3++;
    else if(n==4) c4++;
    else if(n==5) c5++;
    else if(n==6) c6++;                                                    
    else printf("Error.\n");

    return;
}
