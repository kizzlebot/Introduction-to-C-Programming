#include<stdio.h>
#include<stdlib.h>

int main() {
    char mystr[100]; // large size to fit the user's input
    int i;
    
    printf("Enter a string: ");
    scanf("%99s", mystr);
    
    i=0; //initialize 'i' to the first index
    
    // The three while- conditions below are equivalent
    //while(mystr[i]!=0) {       // ASCII of NULL is 0
    //while(mystr[i]!='\0') {    // NULL is represented as '\0'
    while(mystr[i]!=NULL) {
        printf("%c ", mystr[i]);
        i++;
    }


        
    printf("\n\n");
    system("PAUSE");
    return 0;    
}

