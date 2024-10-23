/*
TANGGAL : 04/09/2024
NAMA    : ARIF RAMADHAN
NRP     : 2124640016
PROGRAM PENCARIAN NILAI AKAR MENGGUNAKAN METODE TABEL DENGAN MENAMBAHKAN TABEL| MATKUL METODE NUMERIK
Fungsi f(x) = x^2 -5X - 6
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float f(float x) {
    float pngkt;
    if (x<0){
        pngkt = - pow(x,2);
    } else{
        pngkt = pow(x,2);
    }
    return pngkt - (x*5) - 6;
}

int main(){
    float xn,xt,h,fan,fat,a,b,y,hasil = 0, abs_fan,abs_fat,y_abs;
    int n,j=0;
    float a_xn[20] = {};
    float f_xn[20] = {};

    cout << "Masukkan Nilai Awal: ";
    cin >> a;
    fan = f(a);
    cout << "Masukkan Nilai Akhir: ";
    cin >> b;
    fat = f(b);

    f_xn[0] = {fan};

    if (fan * fat <= 0){
        cout << "Ada akar, Masukkan Nilai n: ";
        cin >> n;
    } else {
        cout << "Tidak ada akar";
        return 0;
    }
    
    h = (b - a) / n;
    xn = a;
    a_xn[0] = {xn};

    for (int i = 1; i <= n; i++) {
        xt = a +i*h;

        fat = f(xt); abs_fat = fabs(fat);

        fan = f(xn); abs_fan = fabs(fan);

        a_xn[i] = {xt}; f_xn[i] = {fat};j+=1;

        y = fan * fat; y_abs = abs_fan*abs_fat;

        if (y <= 0){
            int res = min(abs_fan, abs_fat);

            if (res == abs_fan)
            {
                hasil = xn;
            } else {
                hasil = xt;
            }
            break;
            
        } else {
            xn = xt;
        }                      
    }
    
    cout << "\n" << left << setw(5) << "No." <<setw(10) << "x" << setw(15) << "f(x)" << endl;
    cout << setfill('-') << setw(30) << "-" << setfill(' ') << endl;
    
    for (int i = 0; i <= j; i++) {
        int h = i+1;
        cout << left << setw(5) << h << setw(10) << a_xn[i] << setw(15) << f_xn[i] << endl;
    }

    cout << "\n" <<"Nilai f(x) yang terdekat dengan 0 adalah = " << hasil << endl;

    return 0;
}