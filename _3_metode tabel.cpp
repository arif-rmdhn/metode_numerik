/*
Program Metode tabel 
18/09/2024
*/

#include <stdio.h>
#include <math.h>
float fs (float x);

const int ROWS = 20;
const int COLS = 5;
char headers[COLS][10]={"No","a","b","f(a)","f(b)"};
// {x,f(x)}
float data[ROWS][COLS]={0};

void cetak_tabel(){
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
        if (data[y+1][1] == 0) {
            break;
        }
        for (int j = 0; j < COLS; ++j) {
            
            if (j==0) {
                printf("|");
                printf("%-4.0f", data[y][j]);
                printf("|");
            } else {
                printf("%-12f", data[y+1][j]);
                printf("|");
            }                                
        }
        printf("\n");
    }
}

int main() {
    float a,b,h,x[20]; int i,n;

    printf ("Masukkan nilai dari titik batas awal : ");
    scanf ("%f", &a);
    printf ("\nMasukkan nilai dari titik batas akhir : ");
    scanf ("%f", &b);

    if (fs(a)*fs(b)<0) {
        printf ("\nMasukkan total dari banyaknya pembagi : ");
        scanf ("%d", &n);

        h = (b-a)/n;
        
        x[0]=a;
        data[0][0] = 1;
        data[0][1] = a;
        data[0][2] = 0;
        data[0][3] = fs(a);
        data[0][4] = fs(b);

        for (i=1;i<=n; ++i) {
            x[i]=x[i-1]+h;
            data[i][0] = i+1;
            data[i][1] = x[i-1];
            data[i][2] = x[i];
            data[i][3] = fs(x[i-1]);
            data[i][4] = fs(x[i]);

            if (fs(x[i])*fs(x[i-1])<=0) {
                if (fabs(fs(x[i])) < fabs(fs(x[i-1])) ){
                    cetak_tabel();
                    printf ("\nMaka nilai salah satu akar dari fungsi tersebut adalah : %f\n", x[i]);
                } else {                        
                    cetak_tabel();
                    printf ("\nMaka nilai salah satu akar dari fungsi tersebut adalah : %f\n", x[i-1]);
                }
                break;
            }
        }
    } else {
        printf ("tidak ada akar didalam bagian ini");
    }
}

float fs(float x) {
    float y;
    y = x*x - 5*x - 6;
    return (y);
}                                                                                                                                                                       


