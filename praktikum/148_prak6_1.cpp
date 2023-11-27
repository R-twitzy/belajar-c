#include <iostream>
#include <string>

using namespace std;

int main(){
    string kata;
    cin >> kata;

    int vokal= 0;
    const char* tmp= kata.c_str();

    while (*tmp != '\0') {
    // Memeriksa apakah karakter saat ini adalah vokal
    if (*tmp == 'a' || *tmp == 'i' || *tmp == 'u' || *tmp == 'e' || *tmp == 'o') {
      // Menambahkan 1 ke jumlah vokal
      vokal++;
    }

    // Majukan pointer ke karakter berikutnya
    tmp++;
  }

    cout << vokal << endl;
    return 0;
}