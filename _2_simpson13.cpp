#include <stdio.h>
#include <math.h>

float f(float x){
    return 1/(1+x);
}

int main(){
    float sigma = 0, h,I,a,b,n,x;

    printf("Masukkan niali a: ");
    scanf("%f", &a);
    printf("Masukkan niali b: ");
    scanf("%f", &b);
    printf("Masukkan jumlah iterasi: ");
    scanf("%f", &n);

    h=(b-a)/n;
    x = a;
    I = f(a) + f(b);

    for (int r = 1; r<=(n-1) ; r++){
        x=x+h;

        if (r%2==1){
            sigma =  sigma + 4*f(x);
        } else{
            sigma = sigma + 2*f(x);
        }
        
    }
    I = (I+sigma)*h/3;
    printf("Nilai Integrasi Numerik metode simpson 1/3: %f", I);    
}