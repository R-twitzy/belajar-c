#include <iostream>
using namespace std;

int main()
{
    int A, X, i;
    cout << "Input 10 buah bilangan" << endl;
    cout << "Bilangan pertama: ";
    cin >> A;
    X = A;
    for (i = 1; i <= 9; i++)
    {
        cout << "Bilangan ke " << i + 1 << " : ";
        cin >> A;
        if (A < X)
            X = A;
    }
    cout << X;
    return 0;
}