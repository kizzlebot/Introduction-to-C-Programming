/* This program reads 10 numbers from the user. It finds the
average value and prints it to the monitor.
*/
#include<stdio.h>
#include<stdlib.h>

int main() {
    int grade, total, average;
    unsigned int counter;

    // Initializations
    counter = 0;
    total = 0;
    
    // The loop starts here
    while(counter <= 9) {
        printf("Enter grade: ");
        scanf("%d", &grade);
        
        total = total + grade;
        counter = counter + 1;
    }
    
    average = total / 10;
    printf("The average value is: %d\n", average);    


    printf("\n");
    system("PAUSE");
    return 0;    
}
