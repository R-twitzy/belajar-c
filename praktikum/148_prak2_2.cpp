#include <iostream>

using namespace std;

int main()
{
    int S;

    cin >> S;

    if (S == 0)
    {
        cout << "nol" << endl;
    }
    else if (S > 0)
    {
        cout << "bilangan bulat positif" << endl;
    }
    else if (S < 0)
    {
        cout << "bilangan bulat negatif" << endl;
    }

    return 0;
}