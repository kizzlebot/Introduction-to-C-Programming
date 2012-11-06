#include<stdio.h>
#include<stdlib.h>

int main() {
    int rate;
    
    printf("What is the rate of the restaurant? (1 to 5) ");
    scanf("%d", &rate);
    
    switch(rate) {
        case 1: printf("This restaurant is bad.\n");
                printf("Don't go there!\n");                    break;
        case 2: printf("This restaurant is below average.\n");  break;
        case 3: printf("This restaurant is average.\n");        break;
        case 4:
        case 5: printf("This restaurant is good.\n");
                printf("You'd better try it!\n");               break;
        default: printf("Invalid choice.\n");
    }


        
    printf("\n");
    system("PAUSE");
    return 0;    
}
