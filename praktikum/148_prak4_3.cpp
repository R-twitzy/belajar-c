#include <iostream>
#include <string>
#include <algorithm>   

using namespace std;

bool isAnagram(string x, string y){
    /* NOTES: lower/uppercase berbeda tetap dianggap anagram*/

    // lowercase kedua string
    transform(x.begin(), x.end(), x.begin(), ::tolower);
    transform(y.begin(), y.end(), y.begin(), ::tolower);

    if (x == y) return false;

    // mengurutkan kedua string
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());

    return x == y;
}

int main(){
    string S1, S2;

    getline(cin, S1);
    getline(cin, S2);

    if (isAnagram(S1, S2))
    {
        cout << "YA" << endl;
    } else
    {
        cout << "BUKAN" << endl;
    }
    
    

    return 0;
}