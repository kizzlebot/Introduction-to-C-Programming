/* This program finds the average of multiple numbers. First,
it asks the users how many numbers there are. Then, it prompts
the user for the numbers. Finally, it finds the average value
and prints it to the monitor.
*/
#include<stdio.h>
#include<stdlib.h>

int main() {
    int grade, total, num;
    float average;
    unsigned int counter;

    // Initializations
    counter = 0;
    total = 0;

    // Ask the user how many numbers there are
    printf("How many numbers do you have? ");
    scanf("%d", &num);
    
    // The loop starts here
    while(counter < num) {
        printf("%d. Enter grade: ", counter+1);
        scanf("%d", &grade);
        
        total = total + grade;
        counter = counter + 1;
    }
    
    average = (float) total / num;
    printf("The average value is: %f\n", average);


    printf("\n");
    system("PAUSE");
    return 0;    
}
