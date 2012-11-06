#include<stdio.h>

int main() {
    int x;
    
    // Print from 1 to 100 on the monitor
    x = 1;
    while(x <= 100) {
            printf("%d ", x);
            x = x+1;   // comment out this line and run the program
    }
        
        
    printf("\n\n");
    system("PAUSE");
    return 0;    
}
