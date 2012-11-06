#include<stdio.h>
#include<stdlib.h>

int main() {
    char mychar = 'a';
    
    do {
        printf("%c ", mychar);
        mychar += 1;
        } while(mychar <= 'z');
             
    

    
        
    printf("\n\n");
    system("PAUSE");
    return 0;    
}
