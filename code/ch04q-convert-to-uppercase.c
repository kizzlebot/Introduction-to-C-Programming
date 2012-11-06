#include<stdio.h>
#include<stdlib.h>

int main() {
    char char1='a', char2='b', char3='c';
    
    printf("The are the characters: %c, %c, %c\n", char1, char2, char3);
    char1 -= 32;
    char2 -= 32;
    char3 -= 32;

    printf("After conversion to uppercase: %c, %c, %c\n", char1, char2, char3);    

        
    printf("\n");
    system("PAUSE");
    return 0;    
}
