#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

struct hari
{
    string hari;
    string kegiatan[100];
};

vector<hari> daftarhari;

// fungsi untuk membuka file dan menyimpan ke daftarHari
void bukaFile()
{
    ifstream readFile("ToDoList.txt");
    if (readFile.is_open())
    {
        string line;
        while (getline(readFile, line))
        {
            hari hari;
            if (line.find("Hari: ") == 0)
            {
                hari.hari = line.substr(6); // mengambil nama hari setelah "Hari: "
                int i = 0;
                while (getline(readFile, line) && line.find("\t") == 0)
                {
                    hari.kegiatan[i] = line.substr(4); // mengambil kegiatan setelah nomor urut
                    i++;
                }
                hari.kegiatan[i] = "done";
                daftarhari.push_back(hari);
            }
        }
        readFile.close();
    }
    else
    {
        cout << "\n!File tidak ditemukan, file ToDoList baru akan dibuat saat menyimpan!\n\n";
    }
}

// fungsi untuk menambah hari
void tambah()
{
    hari hariBaru;
    string hari;
    cout << "Masukkan hari: ";
    getline(cin, hari);
    hariBaru.hari = hari;
    int i = 0;
    string kegiatan;
    cout << "!input 'done' jika sudah selesai memasukkan semua kegiatan!\n";
    do
    {
        cout << "Masukkan kegiatan: ";
        getline(cin, kegiatan);
        hariBaru.kegiatan[i] = kegiatan;
        i++;
    } while (kegiatan != "done");

    cout << "\n";
    daftarhari.push_back(hariBaru);
    cout << "\nHari berhasil ditambahkan\n";
}

// fungsi untuk memindah/menggeser hari
void pindah()
{
    char move;
    int index;
    cout << "Masukkan index hari yang ingin dipindahkan: ";
    cin >> index;
    cout << "Pindahkan ke sebelum ('<') atau sesudah ('>')? ";
    cin >> move;
    if (move == '<' && index > 0)
    {
        swap(daftarhari[index], daftarhari[index - 1]);
    }
    else if (move == '>' && index < daftarhari.size() - 1)
    {
        swap(daftarhari[index], daftarhari[index + 1]);
    }
    else
    {
        cout << "Tidak dapat memindahkan hari.\n";
    }
}

// fungsi untuk menghapus hari
void hapus()
{
    int index;
    char tmp;
    cout << "Masukkan index hari yang ingin dihapus: ";
    cin >> index;
    // jika yg diinput bukan 'y' / 'n' maka akan ditanya ulang
    while (tmp != 'y' && tmp != 'n')
    {
        cout << "Apakah anda yakin(y/n)?  ";
        cin >> tmp;
    }

    switch (tmp)
    {
    case 'y':
        daftarhari.erase(daftarhari.begin() + index);
        cout << "\nHari berhasil dihapus\n";
        break;

    default:
        cout << "\nHari tidak dihapus\n";
        break;
    }
    tmp = ' ';
}

// fungsi untuk mencari kegiatan (pada hari apa kegiatan tsb ada)
void cari()
{
    string keyword;
    cout << "Masukkan kata kunci untuk mencari kegiatan: ";
    getline(cin, keyword);
    for (const auto &hari : daftarhari)
    {
        int i = 0;
        while (hari.kegiatan[i] != "\0")
        {
            if (hari.kegiatan[i].find(keyword) == 0)
            {
                cout << "Kegiatan " << hari.kegiatan[i] << " ditemukan pada hari " << hari.hari << "\n";
            };
            i++;
        }
    }
}

// fungsi untuk menyimpan to do list ke file
void simpan(vector<hari> &daftarHari)
{
    ofstream file("ToDoList.txt");
    if (file.is_open())
    {
        for (const auto &hari : daftarHari)
        {
            file << "Hari: " << hari.hari << "\n";

            int i = 0;
            while (hari.kegiatan[i] != "done")
            {
                file << "\t" << i + 1 << ". " << hari.kegiatan[i] << "\n";
                i++;
            };
            file << "\n";
        }
        file.close();
        cout << "To-Do List berhasil disimpan ke dalam file ToDoList.txt\n";
    }
    else
    {
        cout << "Gagal membuka file untuk disimpan.\n";
    }
}

int main()
{

    // membuka file (jika ada)
    bukaFile();

    char pilih;
    do
    {
        cout << "================================================================\n";
        cout << "PILIHAN:\n";
        cout << "1. Tambah Hari\n";
        cout << "2. Geser Hari\n";
        cout << "3. Hapus Hari\n";
        cout << "4. Cari Kegiatan\n";
        cout << "5. Simpan/Perbarui\n";
        cout << "6. Keluar\n";
        cout << "Pilih: ";
        cin >> pilih;
        cout << "\n";
        // menghapus buffer input
        cin.ignore();

        switch (pilih)
        {
        case '1':
            tambah();
            break;

        case '2':
            pindah();
            break;

        case '3':
            hapus();
            break;

        case '4':
            cari();
            break;

        case '5':
            simpan(daftarhari);
            break;

        case '6':
            cout << "Keluar dari program.\n";
            break;

        default:
            cout << "Pilihan tidak valid. Silakan masukkan pilihan yang benar.\n";
            break;
        }
    } while (pilih != '6');

    return 0;
}