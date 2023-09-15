#include <iostream>

using namespace std;

int main(){
    double nilaiTugas, nilaiKuis, nilaiUTS, nilaiUAS;

    cin >> nilaiTugas >> nilaiKuis >> nilaiUTS >> nilaiUAS;

    cout << (0.2 * nilaiTugas) + (0.2 * nilaiKuis) + (0.3 * nilaiUTS) + (0.3 * nilaiUAS) <<endl;

    return 0;
}