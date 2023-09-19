#include <iostream>

using namespace std;

int main()
{
    int x1, y1, x2, y2, z;

    cin >> x1 >> y1 >> x2 >> y2;

    z = abs(x1 - x2) + abs(y1 - y2);

    cout << z;

    return 0;
}