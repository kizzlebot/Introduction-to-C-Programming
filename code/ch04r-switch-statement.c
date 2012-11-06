#include<stdio.h>
#include<stdlib.h>

int main() {
    char mychar;
    
    printf("Enter a character: ");
    scanf("%c", &mychar);
    
    switch(mychar) {
        case 'a': printf("The character is a\n");
        break;
        
        case 'b': printf("The character is b\n");
        break;
        
        case 'c': printf("The character is c\n");
        break;
        
        default:  printf("The character is something else\n");
    }


        
    printf("\n");
    system("PAUSE");
    return 0;    
}
