#include <iostream>

using namespace std;

int main(){
    int n;

    cin >> n;

    for (size_t l = 1; l <= n; l++)
    {
        for (size_t i = l; i < n; i++)
        {
            cout << ' ';
        }
        for (size_t k = 0; k < l; k++)
        {
            cout << "*";
        }
        cout << endl;
        
    }
    
}