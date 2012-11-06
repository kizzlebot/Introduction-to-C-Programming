#include<stdio.h>
#include<stdlib.h>

void print_square(char, int);

int main() {
    int size;
    char ch;
    
    printf("What is the character? ");
    scanf("%c", &ch);
    printf("What is the size of the square? ");
    scanf("%d", &size);

    //printf("DEBUG: size=%d, ch=%c\n", size, ch);
    printf("\n");
    print_square(ch, size);
    
   
    printf("\n\n");
    system("PAUSE");
    return 0;    
}

void print_square(char ch, int size) {
    int i, j;
    
    //printf("DEBUG: size=%d, ch=%c\n", size, ch);
    
    for(i=1; i<=size; i++) {
             for(j=1; j<=size; j++)
                      printf("%c", ch);
             
             printf("\n");
    }
    return;
}


