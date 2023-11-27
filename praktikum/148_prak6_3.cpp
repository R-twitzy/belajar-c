#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream bacaFile("prak6.txt");
    int tmp, code = 0;

    while (bacaFile >> tmp)
    {
        if (tmp % 2 != 0)
        {
            code += tmp;
        }
    }
    // tutup file
    bacaFile.close();

    cout << code << endl;
}