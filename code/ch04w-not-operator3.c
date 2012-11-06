#include<stdio.h>
#include<stdlib.h>

int main() {
    int persona, personb;
    
    do {
        printf("*********************************\n");
        printf("Is person A here? (Yes:1, No:0) ");
        scanf("%d", &persona);
        printf("Is person B here? (Yes:1, No:0) ");
        scanf("%d", &personb);
        } while(persona==0 || personb==0 );
        
//        while(! (persona==1 && personb==1) );
//        This while condition is the same as the above
        
        printf("\nNow person A and person B are here. We can start the meeting!\n");


           

             
    

    
        
    printf("\n\n");
    system("PAUSE");
    return 0;    
}
