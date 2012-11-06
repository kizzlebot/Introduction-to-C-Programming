#include<stdio.h>
#include<stdlib.h>

int main() {

    // Here, the initialization is done outside of the for- line
    int a=1;
    for(; a<=10; a++)
        printf("%d ", a);
    
    printf("\n\n********************\n\n");

    // Here, the counter incrementation is done in the loop,
    // outside of the for- line
    for(a=1; a<=10; ) {
        printf("%d ", a);
        a++;
    }
    
        
    printf("\n\n");
    system("PAUSE");
    return 0;    
}
