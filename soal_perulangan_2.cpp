#include <iostream>
using namespace std;
#define MAKS 8
int main()
{
    int baris, kolom, hasil;
    for (baris = 1; baris <= MAKS; baris++)
    {
        for (kolom = 1; kolom <= MAKS; kolom++)
        {
            hasil = baris * kolom;
            cout << hasil;
        }
        cout << endl; /* pindah baris */
    }
}