#include <iostream>
using namespace std;

float luasPersegiPanjang(float p, float l) {
    return p * l;
}

float luasSegitiga(float a, float t) {
    return 0.5 * a * t;
}

float luasLingkaran(float r) {
    return 3.14 * r * r;
}

int main() {
    float panjang, lebar, tinggi, jejari, alas;
    int pilihan;

    cout << "=================";
    cout << "\n=====M E N U=====";
    cout << "\n=================";

    cout << "\n1 Luas Perseggi Panjang" << endl;
    cout << "2 Luas Segitiga" << endl;
    cout << "3 Luas Lingkaran" << endl;
    cout << "4 Exit" << endl;

    cout << "Masukan Pilihan" << endl;
    cout << "\nPilihan (1/2/3/4) : ";
    cin >> pilihan;

    system("cls");

    while (pilihan != 4) {
        switch (pilihan) {
        case 1:
            cout << "Masukan Panjang : ";
            cin >> panjang;
            cout << "Masukan Lebar : ";
            cin >> lebar;
            cout << "Luas Persegi Panjang : " << luasPersegiPanjang(panjang, lebar) << endl;
            break;

        case 2:
            cout << "Masukan Alas : ";
            cin >> alas;
            cout << "Masukan Tinggi : ";
            cin >> tinggi;
            cout << "Luas Segitiga : " << luasSegitiga(alas, tinggi) << endl;
            break;

        case 3:
            cout << "\nMasukan jari - jarinya : ";
            cin >> jejari;
            cout << "Luas Lingkaran : " << luasLingkaran(jejari) << endl;
            break;

        default:
            cout << "Pilihan salah" << endl;
            break;
        }

        cout << "\nMasukan Pilihan : ";
        cin >> pilihan;

        system("cls");
    }

    cout << "Terima kasih telah menggunakan program ini!" << endl;

    return 0;
}
