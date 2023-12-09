#include <iostream>
#include <fstream>

// Maksimum panjang daftar tugas per hari
const int MAX_TASKS = 10;

// Struct untuk menyimpan informasi tugas per hari
struct DailyTasks
{
    int dayNumber;
    std::string tasks[MAX_TASKS];
};

int main()
{
    int numDays;

    std::cout << "Masukkan jumlah hari: ";
    std::cin >> numDays;

    DailyTasks *dailyTasksList = new DailyTasks[numDays];

    // Memasukkan tugas per hari
    for (int i = 0; i < numDays; ++i)
    {
        dailyTasksList[i].dayNumber = i + 1;

        int numTasks;
        std::cout << "Masukkan jumlah tugas untuk hari ke-" << i + 1 << ": ";
        std::cin >> numTasks;
        std::cin.ignore(); // Membersihkan buffer

        std::cout << "Masukkan tugas untuk hari ke-" << i + 1 << ":\n";
        for (int j = 0; j < numTasks && j < MAX_TASKS; ++j)
        {
            std::cout << "Tugas ke-" << j + 1 << ": ";
            std::getline(std::cin, dailyTasksList[i].tasks[j]);
        }
    }

    // Menyimpan ke file
    std::ofstream outputFile("tasks.txt");
    if (outputFile.is_open())
    {
        for (int i = 0; i < numDays; ++i)
        {
            outputFile << "Hari ke-" << dailyTasksList[i].dayNumber << ":\n";
            for (int j = 0; j < MAX_TASKS && !dailyTasksList[i].tasks[j].empty(); ++j)
            {
                outputFile << "- " << dailyTasksList[i].tasks[j] << "\n";
            }
            outputFile << "\n";
        }
        outputFile.close();
        std::cout << "Data berhasil disimpan ke dalam file 'tasks.txt'\n";
    }
    else
    {
        std::cout << "Gagal membuka file untuk disimpan.\n";
    }

    delete[] dailyTasksList; // Membersihkan memori yang dialokasikan secara dinamis

    return 0;
}
