#include<stdio.h>
#include<stdlib.h>

int main() {
    int temp;     // temporary variable
    int total1=0, total2=0, total3=0;
    int i, j;   // loop counters
    
    for(i=1; i<=3; i++) {       // loop 3 times for the 3 carpenters
        printf("Carpenter %d\n", i);
        for(j=1; j<=5; j++) {
            printf("Enter number of cabinets for day %d: ", j);
            scanf("%d", &temp);
            
            if(i==1)           total1 += temp;
            else if(i==2)      total2 += temp;
            else               total3 += temp;
        }
        printf("\n");
    }
    
    printf("\n***************************\n");
    printf("Total of Carpenter 1 is: %d\n", total1);
    printf("Total of Carpenter 2 is: %d\n", total2);
    printf("Total of Carpenter 3 is: %d\n", total3);
    printf("Grand total is: %d\n", total1+total2+total3);    
            

    
    

    
        
    printf("\n\n");
    system("PAUSE");
    return 0;    
}
