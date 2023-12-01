#include <iostream>
#include <string>

using namespace std;

int main()
{
    struct identitas
    {
        int nim = 148;
        string nama = "Rama";
        string pronouns = "lord/king";
        string alamat = "Sby";
    };

    struct nilai
    {
        string matkul = "MTK";
        int nilai_tugas = 96;
        int nilai_uts = 90;
        int nilai_uas = 100;
    };

    struct mahasiswa
    {
        struct identitas
        {
            int nim = 148;
            string nama = "Rama";
            string pronouns = "lord/king";
            string alamat = "Sby";
        } identitas;
        struct nilai
        {
            string matkul = "MTK";
            int nilai_tugas = 96;
            int nilai_uts = 90;
            int nilai_uas = 100;
        } nilai;
    } mahasiswa;

    cout << mahasiswa.identitas.nim << endl;
    cout << mahasiswa.nilai.matkul << endl;

    /* output
    148
    MTK
    */

    return 0;
}