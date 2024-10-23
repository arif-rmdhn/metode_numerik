#include <iostream>
using namespace std;

int main() {
    int n, value, sum = 0;

    cout << "Masukkan jumlah nilai yang ingin ditambahkan: ";
    cin >> n;

    // Memasukkan nilai satu per satu
    for (int i = 0; i < n; i++) {
        cout << "Masukkan nilai ke-" << i + 1 << ": ";
        cin >> value;
        sum += value; // Menambahkan nilai ke dalam sum
    }

    // Menampilkan hasil penjumlahan
    cout << "Total penjumlahan nilai adalah: " << sum << endl;

    return 0;
}
