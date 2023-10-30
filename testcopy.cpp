#include <iostream>

using namespace std;

int main()
{
    int x, y, z, pilihan;

    cout << "=============================" << endl;
    cout << "Program Pengambilan Keputusan" << endl;
    cout << "Menentukan Nilai Terkecil dan Terbesar dari Variabel x, y, z" << endl;
    cout << "Dengan Perintah Switch..Case" << endl;
    cout << "=============================" << endl;

    cout << "Masukkan Bilangan x: ";
    cin >> x;
    cout << "Masukkan Bilangan y: ";
    cin >> y;
    cout << "Masukkan Bilangan z: ";
    cin >> z;

    cout << "=============================" << endl;
    cout << "Pilih salah satu " << endl;
    cout << "1. Mencari Bilangan Terbesar" << endl;
    cout << "2. Mencari Bilangan Terkecil" << endl;
    cout << "=============================" << endl;
    cout << "Masukkan Pilihan: ";
    cin >> pilihan;
    cout << "============================" << endl;

    switch (pilihan)
    {
    // jika memilih 1 maka ke case 1 (mencari bilangan terbesar)
    case 1:
        // mengecek apakah x lebih besar dari y dan z
        if (x > y && x > z)
        {
            cout << x << " adalah bilangan terbesar" << endl;
        }
        // jika x bukan terbesar lanjut mengecek apakah y lebih besar dari z
        else if (y > z)
        {
            cout << y << " adalah bilangan terbesar" << endl;
        }
        // jika x dan y bukan terbesar maka dipastikan z yang terbesar
        else
        {
            cout << z << " adalah bilangan terbesar" << endl;
        }

        break;

    // jika memilih 2 maka ke case 2 (mencari bilangan terkecil)
    case 2:
        // mengecek apakah x lebih kecil dari y dan z
        if (x < y && x < z)
        {
            cout << x << " adalah bilangan terkecil" << endl;
        }
        // jika x bukan terkecil lanjut mengecek apakah y lebih kecil dari z
        else if (y < z)
        {
            cout << y << " adalah bilangan terkecil" << endl;
        }
        // jika x dan y bukan terkecil maka dipastikan z yang terkecil
        else
        {
            cout << z << " adalah bilangan terkecil" << endl;
        }

        break;
    }

    return 0;
}