#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a;

    cin >> a;

    int z = trunc(a);

    if (z > a)
    {
        cout << z - 1 << ' ' << z << endl;
    }
    else if (z < a)
    {
        cout << z << ' ' << z + 1 << endl;
    }
    else
    {
        cout << z << ' ' << z << endl;
    }

    return 0;
}