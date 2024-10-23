/*
10/10/2024 | ARIF RAMADHAN | METODE NUMERIK: METODE BAGI DUA
Y = X^2-5X-6
*/

/*
10/10/2024 | ARIF RAMADHAN | METODE NUMERIK: METODE SECANT
Y = X^2-5X-6
*/

#include <stdio.h>
#include <math.h>

const int ROWS = 20;
const int COLS = 5;
char headers[COLS][10]={"No","x0","x1","x2","fx0*fx1"};
float data[ROWS][COLS]={0};

void cetak_tabel(){
    printf("\n");
    for (int i = 0; i < COLS; i++) {
        if (i==0){
            printf("|");
            printf("%-4s", headers[i]);
            printf("|");
        }else{
            printf("%-12s", headers[i]);
            printf("|");
        }
    }
    printf("\n");
    for (int i = 0; i < COLS; i++) {
        if (i==0){
            printf("-----");
        }else{
            printf("-------------");
        }
    }
    printf("\n");

    for (int y = 0; y < ROWS; y++) {
        for (int j = 0; j < COLS; ++j) {
            if (j==0) {
                printf("|");
                printf("%-4.0f", data[y][j]);
                printf("|");
            } else {
                printf("%-12f", data[y][j]);
                printf("|");
            }                                
        }
        printf("\n");
    }
}

float f(float x){
    return x*x - 5*x - 6;
}

int main(){
    float x0,x1,x2,f0,f1,tolerance;
    int max_iter,iter = 0;

    printf("Masukkan tebakan nilai awal x0: ");
    scanf("%f", &x0);
    printf("Masukkan tebakan nilai awal x1: ");
    scanf("%f", &x1);
    printf("Masukkan toleransi error: ");
    scanf("%f",&tolerance);
    printf("Masukkan jumlah iterasi maksimum: ");
    scanf("%d", &max_iter);

    do{
        f0 = f(x0);
        f1 = f(x1);
        x2 = (x0+x1)/2;

        data[iter][0] = iter;
        data[iter][1] = x0;
        data[iter][2] = x1;
        data[iter][3] = x2;
        data[iter][4] = f(x0)*f(x2);

        iter++;

        if (fabs(f(x0)*fabs(x1))<tolerance){
            cetak_tabel();
            printf("\nNilai akar ditemukan: %f",x2);
            break;
        }

        if((f(x0)*f(x2))<=0){
            x1 = x2;
        } else{
            x0=x2;
        }

    } while (iter < max_iter);

    if (iter == max_iter){
        printf("Divergen");
    }
    
}
