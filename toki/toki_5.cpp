#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double a, t, hasil;

    cin >> a >> t;
    hasil = 0.5 * a * t;

    cout << fixed << setprecision(2) << hasil << endl;

}