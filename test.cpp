#include <iostream>
#include <string.h>

using namespace std;

int main()
{

    int A;
    int &B = A;
    //A = 10;
    B = 20;
    cout << A;
}