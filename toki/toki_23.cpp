#include <iostream>

using namespace std;

int main()
{
    int N;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;

        bool prime = true;

        if (a == 1 || (a % 2 == 0 && a > 2))
        {
            cout << "BUKAN" << endl;
        }
        else if (a == 2 || a == 3)
        {
            cout << "YA" << endl;
        }

        else
        {
            for (int i = 3; i <= a / 2; i += 2)
            {
                if (a % i == 0)
                {
                    cout << "BUKAN" << endl;
                    prime = false;
                    break;
                }
            }

            if (prime)
            {
                cout << "YA" << endl;
            }
        }
    }
}