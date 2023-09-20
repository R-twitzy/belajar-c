#include <iostream>

using namespace std;

int main()
{
    int n, a, z = 0;

    cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        cin >> a;
        z += a;
    }

    cout << z << endl;
    return 0;
}