#include<stdio.h>
#include<stdlib.h>

int main() {
    float x;

    x = 2.99999999999999999999;
    printf("Test 1: The value is equal to: %.20f\n", x);

    x = 2.91254875612532698;
    printf("Test 2: The value is equal to: %.20f\n", x);

        
    printf("\n");
    system("PAUSE");
    return 0;    
}
