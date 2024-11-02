#include <stdio.h>
#include <math.h>

double f(double x) {
    return x*x - 5*x - 6;
}

double df(double x) {
    return 2*x - 5;
}

int main() {
    double x, x0, tol;
    int max_iter = 100;

    printf("Masukkan nilai awal x: ");
    scanf("%lf", &x0);

    printf("Masukkan toleransi error: ");
    scanf("%lf", &tol);

    for (int i = 0; i < max_iter; ++i) {
        x = x0 - f(x0) / df(x0);
        if (fabs(x - x0) < tol) {
            printf("Akar persamaan adalah: %lf\n", x);
            printf("Jumlah Iterasi: %d\n", i);
            return 0;
        }
        x0 = x;
    }

    printf("Iterasi maksimum tercapai, akar tidak ditemukan.\n");
    return 1;
}