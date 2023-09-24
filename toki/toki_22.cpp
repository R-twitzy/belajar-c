#include <iostream>

using namespace std;

int main()
{
    int n, tmp = 0;

    cin >> n;

    for (size_t i = 0; i < n; i++)
    {

        for (size_t j = 0; j <= i; j++)
        {
            if (tmp > 9)
            {
                tmp = 0;
            }
            cout << tmp;
            tmp += 1;
        }
        cout << endl;
    }
}