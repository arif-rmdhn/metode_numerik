#include <iostream>
using namespace std;

int main() {
    float angka;

    // Meminta pengguna untuk memasukkan nilai (termasuk nilai negatif)
    cout << "Masukkan angka (boleh negatif): ";
    cin >> angka;

    // Menampilkan nilai yang dimasukkan oleh pengguna
    cout << "Nilai yang Anda masukkan adalah: " << angka << endl;

    // Mengecek apakah nilai yang dimasukkan adalah negatif
    if (angka < 0) {
        cout << "Anda memasukkan nilai negatif: " << angka << endl;
    } else {
        cout << "Anda memasukkan nilai positif atau nol: " << angka << endl;
    }

    return 0;
}
