#include <stdio.h>
#include <math.h>

double function(double x) 
{
    return x*x-5*x-6;
}

double secantMethod(double x0, double x1, double tolerance) 
{
    double x2, f0, f1, f2;
    int iteration = 0;
    
    do {
        f0 = function(x0);
        f1 = function(x1);
        
        if (f1 - f0 == 0.0) {
            printf("Division by zero, secant method failed.\n");
            return NAN;
        }
        
        x2 = x1 - (f1 * (x1 - x0)) / (f1 - f0);
        f2 = function(x2);
        
        x0 = x1;
        x1 = x2;
        
        iteration++;
        
        printf("Iteration %d: Root = %lf, f(root) = %lf\n", iteration, x2, f2);
        
    } 
	while (fabs(f2) > tolerance && iteration < 1000);
    
    return x2;
}

int main() {
    double x0, x1, tolerance, root;

    printf("Masukkan x0: ");
    scanf("%lf", &x0);

    printf("Masukkan x1: ");
    scanf("%lf", &x1);

    printf("Masukkan tolerance: ");
    scanf("%lf", &tolerance);

    root = secantMethod(x0, x1, tolerance);

    if (!isnan(root)) {
        printf("\nNilai akar: %lf\n", root);
    }

    return 0;
}