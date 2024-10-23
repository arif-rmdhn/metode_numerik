/*
TANGGAL : 04/09/2024
NAMA    : ARIF RAMADHAN
NRP     : 2124640016
PROGRAM PENCARIAN NILAI AKAR DENGAN METODE BISECTION| MATKUL METODE NUMERIK
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
    float xan, xat,a,b,c;


    return 0;
}