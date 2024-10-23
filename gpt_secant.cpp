#include <stdio.h>
#include <math.h>

// Definisi fungsi f(x) = x^2 - 5x - 6
double f(double x) {
    return x*x - 5*x - 6;
}

int main() {
    double x0, x1, x2, f0, f1, tolerance;
    int max_iter, iter = 0;
    
    // Input tebakan awal
    printf("Masukkan tebakan awal x0: ");
    scanf("%lf", &x0);
    
    printf("Masukkan tebakan awal x1: ");
    scanf("%lf", &x1);
    
    // Input toleransi dan iterasi maksimum
    printf("Masukkan toleransi error: ");
    scanf("%lf", &tolerance);
    
    printf("Masukkan jumlah iterasi maksimum: ");
    scanf("%d", &max_iter);
    
    // Metode Secant
    printf("\nIterasi    |x0            |x1            |x2            |f(x2)\n");
    printf("___________________________________________________________________\n");

    do {
        f0 = f(x0);
        f1 = f(x1);
        
        // Hitung x2 (metode secant)
        x2 = x1 - f1 * (x1 - x0) / (f1 - f0);
        
        // Cetak hasil iterasi
        printf("%d        |%.6lf    |%.6lf    |%.6lf    |%.6lf\n", iter, x0, x1, x2, f(x2));
        printf("___________________________________________________________________\n");
        
        // Pindahkan nilai untuk iterasi berikutnya
        x0 = x1;
        x1 = x2;
        
        iter++;
        
        // Berhenti jika sudah mencapai toleransi
        if (fabs(f(x2)) < tolerance) {
            printf("\nAkar ditemukan: %.6lf\n", x2);
            break;
        }
    } while (iter < max_iter);
    
    if (iter == max_iter) {
        printf("\nAkar tidak ditemukan dalam iterasi maksimum.\n");
    }
    
    return 0;
}
