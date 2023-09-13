#define _USE_MATH_DEFINES

#include <bits/stdc++.h>
#include <cmath>

using namespace std;

/** PSEUDO CODE
 * declare int r, double v
 * input r
 * menghitung volume bola
 * tampilkan v
*/

int main(){
    int r;
    double v;
    cout << "Jari-jari: ";
    cin >> r;
    v= double(4) / double(3) * M_PI * r*r*r;
    cout << "Volume: " << v << endl;
    return 0;
}