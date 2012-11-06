#include<stdio.h>
#include<stdlib.h>

int gcd(int, int);

int main() {
    int a, b, result;

    printf("Enter two integers: ");
    scanf("%d%d", &a, &b);
    result = gcd(a, b);
    printf("\nThe GCD of %d and %d is: %d\n", a, b, result);
    


    printf("\n\n");
    system("PAUSE");
    return 0;    
}

int gcd(int a, int b) {
    int min, counter, result;
    
    // Put the smaller value in 'min'
    if(a<b)  min=a;
    else     min=b;
    
    // We should only loop as much as the smaller value
    for(counter=1; counter<=min; counter++) {
        if(a%counter==0 && b%counter==0)
        result = counter;
    }

    return result;
}
