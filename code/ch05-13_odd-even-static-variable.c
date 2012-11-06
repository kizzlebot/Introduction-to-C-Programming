#include<stdio.h>
#include<stdlib.h>

void find_even_odd(int);

int main() {
    srand(time(0));
    int val=0; // declare different from sentinel of -1
    
    while(val != -1) {
              printf("Enter an integer: ");
              scanf("%d", &val);
              find_even_odd(val); // last call will be made with param=-1
    }


    printf("\n\n");
    system("PAUSE");
    return 0;    
}

void find_even_odd(int x) {
     static int counter_odd=0;
     static int counter_even=0;
     
     if(x == -1) {
          printf("\n");
          printf("The number of odd numbers is: %d\n", counter_odd);
          printf("The number of even numbers is: %d\n", counter_even);          
     }
     else {
          if(x%2 == 0)
                 counter_even++;
          else   counter_odd++;
     }
     return;
}
