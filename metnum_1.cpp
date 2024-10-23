/*
TANGGAL : 04/09/2024
NAMA    : ARIF RAMADHAN
NRP     : 2124640016
PROGRAM PENCARIAN NILAI AKAR DENGAN METODE TABEL| MATKUL METODE NUMERIK
Fungsi f(x) = x^2 -5X - 6
*/

#include <iostream>
#include <cmath>
using namespace std;

float fungsi(float x){
    float pngkt;
    if (x<0){
        pngkt = - pow(x,2);
    } else{
        pngkt = pow(x,2);
    }
    return pngkt - (x*5) - 6;
}

int main(){
    float xn,xt,h,fan,fat,n,a,b,y,hasil;

    cout << "Masukkan Nilai Awal: ";
    cin >> a;
    fan = fungsi(a);
    // cout << fan << endl;
    cout << "Masukkan Nilai Akhir: ";
    cin >> b;
    fat = fungsi(b);
    // cout << fat << endl;

    if (fan * fat <= 0){
        cout << "Ada akar, Masukkan Nilai n: ";
        cin >> n;
    } else {
        cout << "Tidak ada akar";
        return 0;
    }
    
    h = (b - a) / n;
    xn = a;

    for (int i = 1; i <= n; i++)
    {
        xt = a +i*h;

        fat = fungsi(xt);
        fan = fungsi(xn);
        y = fan * fat;
        // cout << fan << "\n" ;
        // cout << fat << "\n" ;
        if (y <= 0)
        {
            hasil = min(xt,xn);
            cout << "Hasil f(x)= " << hasil;
            return 0;
        } else {
            xn = xt;
        }        
    }
    cout << "Hasil ERROR!!!";

    return 0;
}