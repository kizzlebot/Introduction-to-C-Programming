#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    char mystr1[] = "abc";
    char mystr2[] = "Hey, Joe! What's up?";
    int val;
    
    printf("This is string1...\n%s\n", mystr1);
    val = strlen(mystr1);
    printf("The size of string1 is: %d\n\n", val);
        
    printf("This is string2...\n%s\n", mystr2);
    val = strlen(mystr2);
    printf("The size of string2 is: %d\n", val);

    printf("\n\n");
    system("PAUSE");
    return 0;    
}
