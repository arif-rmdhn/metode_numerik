#include <iostream>
using namespace std;

void drawTable(int rows, int cols) {
    // Panjang kolom (setiap kolom memiliki lebar tetap)
    const int colWidth = 10;

    // Menggambar garis horizontal (border atas tabel)
    for (int i = 0; i < cols; i++) {
        cout << "+";
        for (int j = 0; j < colWidth; j++) {
            cout << "-";
        }
    }
    cout << "+" << endl;

    // Menggambar isi tabel dengan border
    for (int r = 0; r < rows; r++) {
        // Isi baris
        for (int c = 0; c < cols; c++) {
            cout << "|";
            cout.width(colWidth);
            cout << right << (r * cols + c + 1);  // Isi tabel dengan angka berurutan
        }
        cout << "|" << endl;

        // Garis horizontal setelah setiap baris
        for (int i = 0; i < cols; i++) {
            cout << "+";
            for (int j = 0; j < colWidth; j++) {
                cout << "-";
            }
        }
        cout << "+" << endl;
    }
}

int main() {
    int rows, cols;
    cout << "Masukkan jumlah baris: ";
    cin >> rows;
    cout << "Masukkan jumlah kolom: ";
    cin >> cols;

    drawTable(rows, cols);

    return 0;
}
