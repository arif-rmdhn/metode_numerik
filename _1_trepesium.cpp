// trapezoidal

#include <stdio.h>
#include <math.h>

float f(float x){
    return x*x - 5*x - 6;
}

int main(){
    float sigma = 0, h,I,a,b,n,x;

    printf("Masukkan nilai a: ");
    scanf("%f", &a);
    printf("Masukkan nilai b: ");
    scanf("%f", &b);
    printf("Masukkan nilai iterasi: ");
    scanf("%f", &n);

    h=(b-a)/n;
    x = a;
    I = f(a) + f(b);

    for (int i = 1; i < n; i++){
        x += h;
        sigma = sigma + 2*f(x);
    }

    I = (I+sigma)*h/2;
    printf("Nilai Integrasi Numerik: %f", I);    
}