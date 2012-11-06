#include<stdio.h>

int main() {
    int x;
    
    // Print the even numbers between 0 and 100
    x = 0;
    while(x <= 100) {
            if(x%2 == 0)        // Checks if the number is even
            printf("%d ", x);
            x = x+1;
    }
        
        
    printf("\n\n");
    system("PAUSE");
    return 0;    
}
