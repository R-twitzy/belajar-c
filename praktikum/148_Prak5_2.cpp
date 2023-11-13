#include <iostream>
#include <string>

using namespace std;

string fibonastring(int n, string S[])
{
    if (n == 0)
    {
        return S[0];
    }
    else if (n == 1)
    {
        return S[1];
    }
    else
    {
        return fibonastring(n - 1, S) + fibonastring(n - 2, S);
    }
}

int main()
{
    int T, n;

    cin >> T;

    string S[2], hasil[T];

    for (int i = 0; i < T; i++)
    {
        cin >> n >> S[0] >> S[1];

        hasil[i] = fibonastring(n, S);
    }

    for (int i = 0; i < T; i++)
    {
        cout << "Case #" << i + 1 << ": " << hasil[i] << endl;
    }
}