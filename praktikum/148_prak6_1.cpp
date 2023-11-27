#include <iostream>
#include <string>

using namespace std;

int main()
{
    string kata;
    cin >> kata;

    int vokal = 0;
    const char *tmp = kata.c_str();

    while (*tmp != '\0')
    {
        if (*tmp == 'a' || *tmp == 'i' || *tmp == 'u' || *tmp == 'e' || *tmp == 'o')
        {
            vokal++;
        }

        // next char
        tmp++;
    }

    cout << vokal << endl;
    return 0;
}