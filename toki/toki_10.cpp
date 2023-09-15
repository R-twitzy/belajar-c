#include <iostream>

using namespace std;

int main()
{
    int i;

    cin >> i;

    if (i > 0 && i < 10)
    {

        cout << "satuan";
    }
    else if (i >= 10 && i < 100)
    {
        cout << "puluhan";
    }
    else if (i >= 100 && i < 1000)
    {
        cout << "ratusan";
    }
    else if (i >= 1000 && i < 10000)
    {
        cout << "ribuan";
    }
    else if (i >= 10000 && i < 100000)
    {
        cout << "puluhribuan";
    }
    else
    {
    }
}