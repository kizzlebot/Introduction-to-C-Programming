// Exercise 3.16 in book

#include<stdio.h>
#include<stdlib.h>

int main() {
    int mile, gallon, totalmile, totalgallon;
    
    gallon = 0; // Initialize as different from sentinel of -1
    totalmile = 0;
    totalgallon = 0;
    
    while(gallon != -1) {
        printf("Enter the number of gallons (sentinel:-1): ");
        scanf("%d", &gallon);
        
        if(gallon != -1) {
            printf("Enter the miles: ");
            scanf("%d", &mile);
            
            printf("The mpg for this fueling is: %.2f\n\n", (float)mile/gallon);
            totalmile += mile;
            totalgallon += gallon;
       }
    }
    
    printf("\n***************************\n");
    printf("The total mpg is: %.2f\n", (float)totalmile/totalgallon);


        
    printf("\n");
    system("PAUSE");
    return 0;    
}
