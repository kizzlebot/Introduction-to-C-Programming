#include<stdio.h>
#include<stdlib.h>

int main() {
    int number, total;
    
    number = 1; // Initialize 'number' to anything that's different
             // from the sentinel value, '0'
    total = 1;  // Initialize 'total' to 1

    // Keep looping while number is different from the sentinel
    while(number != 0) {
        printf("Enter a number: ");
        scanf("%d", &number);    
        
        if(number != 0)
        total *= number;  //same as: total = total * number;
    }
    
    printf("The answer is: %d\n", total);

        
    printf("\n");
    system("PAUSE");
    return 0;    
}
