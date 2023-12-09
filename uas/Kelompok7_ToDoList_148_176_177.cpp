#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

struct hari
{
    string hari;
    string kegiatan[100];
};

void printToDoList(vector<hari> &daftarHari)
{
    ofstream file("To_Do_List.txt");
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
        cout << "To-Do List berhasil disimpan ke dalam file To_Do_List.txt\n";
    }
    else
    {
        cout << "Gagal membuka file untuk disimpan.\n";
    }
}

int main()
{
    vector<hari> daftarhari;

    ifstream readFile("To_Do_List.txt");
    if (readFile.is_open())
    {
        string line;
        while (getline(readFile, line))
        {
            hari hari;
            if (line.find("Hari: ") == 0)
            {
                hari.hari = line.substr(6); // Mengambil nama hari setelah "Hari: "
                int i = 0;
                while (getline(readFile, line) && line.find("\t") == 0)
                {
                    hari.kegiatan[i] = line.substr(4); // Mengambil kegiatan setelah "nomor urut"
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
        cout << "File To_Do_List.txt tidak ditemukan. Membuat file baru...\n";
    }

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
        cout << endl;
        cin.ignore(); // Membersihkan newline dari buffer

        switch (pilih)
        {
        case '1':
        {
            hari newTask;
            string hari;
            cout << "Masukkan hari: ";
            getline(cin, hari);
            newTask.hari = hari;
            int i = 0;
            string kegiatan;
            cout << "!input 'done' jika sudah selesai memasukkan semua kegiatan\n";
            do
            {
                cout << "Masukkan kegiatan: ";
                getline(cin, kegiatan);
                newTask.kegiatan[i] = kegiatan;
                i++;
            } while (kegiatan != "done");

            cout << endl;
            daftarhari.push_back(newTask);
            cout << "\nHari berhasil ditambahkan\n";
            break;
        }
        case '2':
        {
            char move;
            int index;
            cout << "Masukkan index hari yang ingin dipindahkan: ";
            cin >> index;
            cout << "Pindahkan ke hari sebelum ('<') atau sesudah ('>')? ";
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
            break;
        }
        case '3':
        {
            int index;
            char tmp;
            cout << "Masukkan index hari yang ingin dihapus: ";
            cin >> index;
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
            break;
        }
        case '4':
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
                        cout << "Kegiatan " << hari.kegiatan[i] << " ditemukan pada hari " << hari.hari << endl;
                    };
                    i++;
                }
            }
            break;
        }
        case '5':
            printToDoList(daftarhari);
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