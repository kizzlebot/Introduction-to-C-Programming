#include<stdio.h>
#include<stdlib.h>

int main() {
    int i, temp=0;   // initialize temp to different from -1
    int total1=0, total2=0, total3=0;
    
    for(i=1; i<=3; i++) {
        printf("Carpenter %d\n", i);
        while(! (temp==-1)) {
            printf("Enter number of cabinets: ");
            scanf("%d", &temp);
            
            if(i==1 && temp!=-1)           total1 += temp;
            else if(i==2 && temp !=-1)     total2 += temp;
            else if(i==3 && temp !=-1)     total3 += temp;
        }
        temp = 0; // re-initialize temp to different from -1 for the next carpenter
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
