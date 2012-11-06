#include<stdio.h>
#include<stdlib.h>
#include<math.h>  // #include math.h

int main() {
    double x, fx;
    int i;
    
    // Part 1
    printf("        x         f(x)\n");
    for(x=-1; x<=1; x+= 0.5) {
        fx = x*x - sin(2. *x);
        printf("%12lf%12lf\n", x, fx);
    }
    printf("\n");

    // Part 2
    printf("        x         f(x)\n");
    for(x=0.5; x<=1.0; x+= 0.1) {
        fx = x*x - sin(2. *x);
        printf("%12lf%12lf\n", x, fx);
    }
    printf("\n");
    
    // Part 3
    printf("        x         f(x)\n");
    for(x=0.9; x<=1.0; x+= 0.01) {
        fx = x*x - sin(2. *x);
        printf("%12lf%12lf\n", x, fx);
    }
    printf("\n");

    // Part 4
    printf("        x         f(x)\n");
    for(x=0.96; x<=0.97; x+= 0.001) {
        fx = x*x - sin(2. *x);
        printf("%12lf%12lf\n", x, fx);
    }
    printf("\n");

    // Part 5
    printf("        x         f(x)\n");
    for(x=0.966; x<=0.967; x+= 0.0001) {
        fx = x*x - sin(2. *x);
        printf("%12lf%12lf\n", x, fx);
    }
    printf("\n");

        
    printf("\n\n");
    system("PAUSE");
    return 0;    
}
