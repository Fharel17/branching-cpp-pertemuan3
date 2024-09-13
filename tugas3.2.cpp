#include <iostream>
using namespace std;

int main() {
    int pilihan;
    float panjang, lebar, alas, tinggi, luas;

    cout << "Program Menghitung Luas\n";
    cout << "1. Luas Persegi\n";
    cout << "2. Luas Persegi Panjang\n";
    cout << "3. Luas Segitiga\n";
    cout << "Pilih jenis bangun datar (1/2/3): ";
    cin >> pilihan;

    switch(pilihan) {
        case 1:
            cout << "Masukkan panjang sisi persegi: ";
            cin >> panjang;
            luas = panjang * panjang;
            cout << "Luas Persegi: " << luas << endl;
            break;

        case 2:
            cout << "Masukkan panjang persegi panjang: ";
            cin >> panjang;
            cout << "Masukkan lebar persegi panjang: ";
            cin >> lebar;
            luas = panjang * lebar;
            cout << "Luas Persegi Panjang: " << luas << endl;
            break;

        case 3:
            cout << "Masukkan alas segitiga: ";
            cin >> alas;
            cout << "Masukkan tinggi segitiga: ";
            cin >> tinggi;
            luas = 0.5 * alas * tinggi;
            cout << "Luas Segitiga: " << luas << endl;
            break;

        default:
            cout << "Pilihan tidak valid!" << endl;
            break;
    }

    return 0;
}
