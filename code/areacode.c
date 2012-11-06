#include<stdio.h>

int main() {
    int area;
    
    printf("Enter the area code. Possible choices are: 407, 305, 904: ");
    scanf("%d", &area);
    
    if(area == 407)
    printf("This area code is used for Orlando.\n");
    
    else if(area == 305)
    printf("This area code is used for Miami.\n");
    
    else if(area == 904)
    printf("This area code is used for Jacksonville.\n");
    
    else printf("You have entered an invalid choice.\n");
        
    printf("\n");
    system("PAUSE");
    return 0;    
}
