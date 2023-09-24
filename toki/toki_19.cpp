#include <iostream>

using namespace std;

int main(){
    int n, k;

    cin >> n >> k;

    for (size_t i = 1; i <= n; i++)
    {
        if (i%k == 0)
        {
            cout << "*" << ' ';
        } else
        {
            cout << i << ' ';
        }
        
        
    }
    
}