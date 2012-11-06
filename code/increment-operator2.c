#include<stdio.h>
#include<stdlib.h>

int main() {
    int a, b;
    
    a=2; b=4;
    a = a + (b++);  // use the value of b=4, then increment 'b'.
    printf("Test 1: The values are a=%d and b=%d\n", a, b);
    
    a=2; b=4;
    a = a + (++b);  // 'b' is incremented to 5. Then the new b=5
                    // is used in the expression.
    printf("Test 2: The values are a=%d and b=%d\n", a, b);    

    printf("\n");

    a=2; b=4;
    a = a + (b--);  // use the value of b=4, then decrement 'b'.
    printf("Test 3: The values are a=%d and b=%d\n", a, b);
    
    a=2; b=4;
    a = a + (--b);  // 'b' is decremented to 5. Then the new b=5
                    // is used in the expression.
    printf("Test 4: The values are a=%d and b=%d\n", a, b);    




        
    printf("\n");
    system("PAUSE");
    return 0;    
}
