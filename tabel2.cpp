#include <iostream>
#include <iomanip> // Digunakan untuk format tabel
using namespace std;

int main() {
    // Contoh data
    const int n = 3; // Jumlah baris data
    string header[] = {"ID", "Nama", "Nilai"};
    int id[] = {1, 2, 3};
    string nama[] = {"Ali", "Budi", "Cici"};
    double nilai[] = {85.5, 90.0, 78.5};

    // Menampilkan header tabel
    cout << left << setw(5) << header[0] 
         << setw(15) << header[1] 
         << setw(10) << header[2] << endl;

    // Menampilkan garis pemisah
    cout << setfill('-') << setw(30) << "-" << setfill(' ') << endl;

    // Menampilkan isi tabel
    for (int i = 0; i < n; i++) {
        cout << left << setw(5) << id[i] 
             << setw(15) << nama[i] 
             << setw(10) << nilai[i] << endl;
    }

    return 0;
}
