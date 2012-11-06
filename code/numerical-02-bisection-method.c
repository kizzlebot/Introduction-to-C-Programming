#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double f(double); // the function

int main() {
    double xa      = -2.0;
    double xb      = 1.5;
    double xm;
    double epsilon = 0.001;
    double max_iteration = 1000;
    double counter=0;
    
    printf("Finding the Roots with the Bisection Method\n");
    printf("-------------------------------------------\n\n");
    
    printf("Initial x- values:\n");
    printf("f(%.2lf) = %lf\n", xa, f(xa));
    printf("f(%.2lf) = %lf\n\n", xb, f(xb));
    
    printf("epsilon = %lf\n\n", epsilon);
    
    // Make sure f(xa) and f(xb) have opposite signs
    if( f(xa)*f(xb) > 0) {
        printf("Error: f(xa) and f(xb) don't have opposite signs!\n\n");
        system("PAUSE");
        return 1;
    }
    
    xm = (xa+xb)/2; // initial value of xm
    printf("     xa         xb        f(xa)      f(xb)       xm        f(xm)\n");    

    // Loop of the bisection method
    while(counter<max_iteration && fabs(f(xm))>epsilon) {
          xm = (xa+xb)/2;
          printf("%10lf %10lf %10lf %10lf %10lf %10lf\n", xa, xb, f(xa), f(xb), xm, f(xm));
          
          if( f(xa)*f(xm) < 0)
              xb = xm;
          else xa = xm;
          
          counter++; // increment the counter
    }
    
    printf("\nNumber of iterations done: %.0lf, max_iterations=%.0lf\n", counter, max_iteration);
    printf("The root is: %lf\n", xm);
    printf("The root we found makes the function equal to: f(xm)=%lf\n", f(xm));








        
    printf("\n\n");
    system("PAUSE");
    return 0;    
}
//******************
double f(double x) {
       double val;
       
       val = (x*x*x)-(x*x)-(9*x)+9;
       return val;
}
