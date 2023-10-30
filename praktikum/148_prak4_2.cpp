#include <iostream>
#include <string>

using namespace std;

int main(){
    string jiko;

    getline(cin, jiko);

    // menggunakan fungsi rfind untuk mencari index terakhir spasi
    int lastIndex = jiko.rfind(' ');
    
    // mengoutput substring dengan posisi awal index yg telah dicari + 1 (agar spasi tidak ikut output)
    cout << jiko.substr(lastIndex + 1) << endl;

    return 0;
}