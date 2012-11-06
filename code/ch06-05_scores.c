#include<stdio.h>
#include<stdlib.h>

int main() {
    int score[5] = {0, 0, 0, 0, 0}; // initialize the array
    int i, val=0; // different from -1
    int counter=0;
    
    while(val != -1) {
        printf("%d. Enter a score: ", counter+1);
        scanf("%d", &val);
        if(val>=1 && val<=5) { //ignore invalid scores
            score[val-1]++;
            counter++;
        }
    }
    
    printf("\nThe total number of scores is: %d\n\n", counter);

    // Print the result
    printf("%6s%10s%10s\n", "Score", "Result", "Percent");
    printf("---------------------------\n");
    for(i=0; i<=4; i++)
        printf("%6d%10d%10.2f\n", i+1, score[i], (float)score[i]/counter*100);


    
              


        
    printf("\n\n");
    system("PAUSE");
    return 0;    
}

