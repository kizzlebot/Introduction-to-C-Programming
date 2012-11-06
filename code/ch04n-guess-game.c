#include<stdio.h>
#include<stdlib.h>

int main() {
    int secret, guess;

    srand( time(0) );   // use time as seed
    
    secret = rand() %101; // random number 0<= secret <= 101

    // initialize guess to something different from secret to start the loop
    guess = secret+1;

    printf("The secret number is between 0 and 100!\n\n");
    
    while( guess != secret ) {
           printf("Enter your guess: ");
           scanf("%d", &guess);
           
           if(secret < guess)
               printf("The secret is smaller! Try again!\n\n");
           else if(secret > guess)
               printf("The secret is larger! Try again!\n\n");
    }
    
    printf("\n************************************\n");
    printf("Congratulations! You got the secret!\n");
    printf("************************************\n");    
        
    printf("\n");
    system("PAUSE");
    return 0;    
}
