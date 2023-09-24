#include <iostream>

using namespace std;

int main(){
    int n[101], i=0;

    while (cin >> n[i])
    {
        i++;
    }
    for (int j = i-1; j >= 0; j--)
    {
        cout << n[j] << endl;
    }
    
}