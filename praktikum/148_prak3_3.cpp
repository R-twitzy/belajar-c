#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    int A, B, key, tmp, count = 0;

    srand(time(NULL));

    A = rand() %10 + 1;
    B = rand() %90 + A;
    key = rand() %(B-A) + A;

    cout << "KELUARAN anda \t KELUARAN penguji" << endl;
    cout << "\t \t " << A << ' ' << B << endl;

    while (tmp != key && count < 15)
    {
        cin >> tmp;

        if (tmp == key)
        {
            cout << "\t \t nah bener lu gw maapin" << endl;
        }
        else if (tmp < key)
        {
            cout << "\t \t terlalu kecil" << endl;
        }
        else if (tmp > key)
        {
            cout << "\t \t terlalu besar" << endl;
        }

        count++;
    }
    return 0;
}