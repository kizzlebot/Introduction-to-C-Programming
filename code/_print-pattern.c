// Exercise 3.32 in book

#include<stdio.h>
#include<stdlib.h>

int main() {
    int n, side;
    
    printf("Enter the side of the square (between 1 and 10): ");
    scanf("%d", &side);
    printf("\n");
    
    if(side<1 || side>10)
    printf("The input is not between 1 and 10\n");
    
    else {
         n=1;        // initialization
         while(n<=side) {
            if(side==1)          printf("*\n");
            else if(side==2)     printf("**\n");
            else if(side==3)     printf("***\n");
            else if(side==4)     printf("****\n");
            else if(side==5)     printf("*****\n");
            else if(side==6)     printf("******\n");
            else if(side==7)     printf("*******\n");
            else if(side==8)     printf("********\n");
            else if(side==9)     printf("*********\n");
            else if(side==10)    printf("**********\n");
            
            n++;
       } // closing the while-loop
   } // closing the else
    
    
    
        
    printf("\n");
    system("PAUSE");
    return 0;    
}
