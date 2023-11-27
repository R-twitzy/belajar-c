#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    struct hiu
    {
        string name;
        string makan;
    } hiu[n];

    for (int i = 0; i < n; i++)
    {
        cin >> hiu[i].name;
        cin >> hiu[i].makan;
    }

    // pembatas input dan output
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        if (hiu[i].makan == "Tomato")
        {
            cout << hiu[i].name << endl;
        }
    }

    return 0;
}