#include<stdio.h>
#include<stdlib.h>

int main() {
    int password = 1234;
    int user_entry, correct_guess=0, counter=1;
    
    while(counter<=3 && correct_guess==0) {
             printf("%d. Enter the password: ", counter);
             scanf("%d", &user_entry);
             
             if(user_entry == password) {
                 printf("Correct password!\n\n");
                 correct_guess = 1;
             }
             else printf("Wrong password. Try again.\n\n");
             
             counter++;
    }

    printf("***********************\n");
    printf("The program terminates.\n");
    printf("***********************\n");
                           
    
    
    



        
    printf("\n");
    system("PAUSE");
    return 0;    
}
