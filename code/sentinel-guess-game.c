/* The user of the program should guess the secret value.
Put the secret value in the variable 'secret' below. */
#include<stdio.h>
#include<stdlib.h>

int main() {
    int x, secret;
    
    secret = 14;  // This is the value to guess
    x = secret+1; // Initialize 'x' to anything that's different from 'secret'

    while(x != secret) {
            printf("Enter your guess: ");
            scanf("%d", &x);
            
            if(x==secret)
            printf("Congratulations! You guessed correct!\n");
            else printf("Wrong guess. Try again!\n\n");
   }
    

    printf("\n");
    system("PAUSE");
    return 0;    
}
