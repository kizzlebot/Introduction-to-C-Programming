#include<stdio.h>

int main() {
    int sandwich, sufficient;
    
    printf("Enter the number of sandwiches: ");
    scanf("%d", &sandwich);
    
    // This is one way how we can use the conditional operator to
    // allocate a value to 'sufficient'
    sufficient = (sandwich>=10) ? 1 : 0;
    printf("Sufficient = %d\n", sufficient);
    
    // We can also use the conditional operator to do an action,
    // which is printing in this case
    (sufficient==1) ? printf("We have enough food.\n") : printf("We need more food.\n");
        
    printf("\n");
    system("PAUSE");
    return 0;    
}
