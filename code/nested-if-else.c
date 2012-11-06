#include<stdio.h>

int main() {
    int id;
    
    printf("Enter the ID of the food. Possible choices 0, 1, 2, 10, 11, 12: ");
    scanf("%d", &id);
    
    // Vegetables ID are from 0 to 9
    // Meats ID are from 10 to 19
    
    if(id < 10) {
          printf("This is a vegetable!\n");
          if(id==0)
               printf("It's a lettuce.\n");
          else if(id==1)
               printf("It's a tomato.\n");
          else if(id==2)
               printf("It's an onion.\n");
    }
    
    else {
          printf("This is a meat!\n");
          if(id==10)
               printf("It's a pepperoni.\n");
          else if(id==11)
               printf("It's a ham.\n");
          else if(id==12)
               printf("It's a hot dog.\n");
    }

    printf("\n");
    system("PAUSE");
    return 0;    
}
