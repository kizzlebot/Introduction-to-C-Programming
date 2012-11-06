/* This program takes multiple grades from the user. When the user
is done entering all the grades, the user enters the sentinel value
of -1. Then, the program computes the average and prints it.
*/
#include<stdio.h>
#include<stdlib.h>

int main() {
    int grade, total, counter;
    float average;

    // Initializations
    counter = 0;
    total = 0;
    grade = -4; // Put any value here that's different from the sentinel
                // so that the loop starts. If, by chance, grade contained
                // -1 the loop won't start.
    
    // The loop starts here
    while(grade != -1) {   // while grade is different from sentinel value
        printf("%d. Enter grade: ", counter+1);
        scanf("%d", &grade);
        
        total = total + grade;
        counter = counter + 1;
    }
    
    counter = counter - 1;  // adjust the counter; we don't want to count
                            // the sentinel value
    total = total + 1;      // adjust the total; the last value, -1, was
                            // added to the total

    if(counter==0)          // we don't want to risk dividing by zero
    printf("You didn't enter any grade.\n");
    else {
         average = (float) total / counter;
         printf("The average value is: %f\n", average);
    }

//    printf("DEBUG: total = %d\n", total);
//    printf("DEBUG: counter = %d\n", counter);

    printf("\n");
    system("PAUSE");
    return 0;    
}
