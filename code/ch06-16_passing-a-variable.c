#include<stdio.h>
#include<stdlib.h>

void my_fn_increment(int);

int main() {
    int n=10;
    
    printf("From main before calling the function: n=%d\n", n);
    my_fn_increment(n);
    printf("From main before calling the function: n=%d\n", n);    
    

        
    printf("\n\n");
    system("PAUSE");
    return 0;    
}


void my_fn_increment(int x) {
     x++;
     printf("From the function: x=%d\n", x);
     return;
}
