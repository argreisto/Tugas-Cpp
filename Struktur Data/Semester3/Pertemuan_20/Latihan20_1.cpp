#include <iostream>
#include <string>
using namespace std;

// ============================================ PROGRAM DENGAN ANGKA ============================================
int dataAngka[10] = {45, 12, 89, 34, 67, 10, 5, 99, 23, 50};
int nAngka = 10;

void bubbleSortAngka() {
    for (int i = 0; i < 100; i++) cout << "=";
    cout << endl;
    cout << "Program 1 : Bubble Sort Sederhana dengan 10 Angka\n";
    for (int i = 0; i < 100; i++) cout << "=";
    cout << endl;

    cout << "\nData Awal : ";
    for (int i = 0; i < nAngka; i++) cout << dataAngka[i] << " ";
    cout << endl;

    for (int i = 0; i < nAngka - 1; i++) {
        cout << "\n-- Iterasi ke-" << i + 1 << " --" << endl;

        for (int j = 0; j < nAngka - i - 1; j++) {
            cout << "     Bandingkan "
                 << dataAngka[j] << " dan " << dataAngka[j + 1];

            if (dataAngka[j] > dataAngka[j + 1]) {
                cout << " -> di Tukar\n";
                swap(dataAngka[j], dataAngka[j + 1]);
            } else {
                cout << " -> tetap Tidak ditukar\n";
            }
        }
    }

    for (int i = 0; i < 75; i++) cout << ".";
    cout << endl;

    cout << "    Hasil Akhir : ";
    for (int i = 0; i < nAngka; i++) cout << dataAngka[i] << " ";
    cout << endl;

    for (int i = 0; i < 75; i++) cout << ".";
    cout << endl << endl;
}

// ============================================ PROGRAM DENGAN NAMA ============================================
string dataNama[5] = {"Rafi", "Febrian", "Arya", "Ega", "Nabil"};
int nNama = 5;

void bubbleSortNama() {
    for (int i = 0; i < 100; i++) cout << "=";
    cout << endl;
    cout << "Program 2 : Bubble Sort dengan Nama\n";
    for (int i = 0; i < 100; i++) cout << "=";
    cout << endl;

    cout << "\nData Awal : ";
    for (int i = 0; i < nNama; i++) cout << dataNama[i] << ", ";
    cout << endl;

    for (int i = 0; i < nNama - 1; i++) {
        cout << "\n-- Iterasi ke-" << i + 1 << " --" << endl;

        for (int j = 0; j < nNama - i - 1; j++) {
            cout << "   Bandingkan "
                 << dataNama[j] << " dan " << dataNama[j + 1];

            if (dataNama[j] > dataNama[j + 1]) {
                cout << " -> di Tukar\n";
                swap(dataNama[j], dataNama[j + 1]);
            } else {
                cout << " -> tetap Tidak ditukar\n";
            }
        }
    }

    for (int i = 0; i < 75; i++) cout << ".";
    cout << endl;

    cout << "    Hasil Akhir : ";
    for (int i = 0; i < nNama; i++) cout << dataNama[i] << ", ";
    cout << endl;

 	for (int i = 0; i < 75; i++) cout << ".";
    cout << endl;
    
    cout << "\nProgram Selesai." << endl;
}

// ============================================ MAIN ============================================
int main() {
    bubbleSortAngka();
    bubbleSortNama();
    return 0;
}
