#include<stdio.h>
#include<stdlib.h>

int main() {
    int password = 1234;
    int user_entry;
    int i;
    
    for(i=1; i<=3; i++) {
             printf("%d. Enter the password: ", i);
             scanf("%d", &user_entry);
             
             if(user_entry == password) {
                 printf("Correct password!\n\n");
                 break;
             }
             else printf("Wrong password. Try again.\n\n");
    }

    printf("***********************\n");
    printf("The program terminates.\n");
    printf("***********************\n");
                           
    
    
    



        
    printf("\n");
    system("PAUSE");
    return 0;    
}
