#include<stdio.h>
#include<stdlib.h>

int roll_dice(void);

int main() {
    srand(time(0));
    int i, val, c1=0, c2=0, c3=0, c4=0, c5=0, c6=0;
    int num = 1000000;
    
    for(i=0; i<=num; i++) {
             val = roll_dice();
             if(val==1) c1++;
             else if(val==2) c2++;
             else if(val==3) c3++;
             else if(val==4) c4++;
             else if(val==5) c5++;
             else if(val==6) c6++;                                                    
             else {printf("Error.\n"); return;}
    }
    
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

int roll_dice(void){
    int n;
    n = rand() % 6;     // number between 0 and 5
    n = n+1;            // number between 1 and 6
    return n;
}
