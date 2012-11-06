#include<stdio.h>
#include<stdlib.h>

void print_integer_reverse(int);

int main() {
    int x;
    
    printf("Enter a positive integer: ");
    scanf("%d", &x);
    
    print_integer_reverse(x);
    
   
    printf("\n\n");
    system("PAUSE");
    return 0;    
}

void print_integer_reverse(int x) {
     int temp;
     
     if(x==0)
             printf("0\n");
             
     else {
          while(x!=0) {
                 temp = x%10;
                 printf("%d", temp);
                 x = (x-temp)/10; //x = x/10;
          }
     }
     return;
}


