#include <iostream>
#include <string>
#include <limits>
#include <unistd.h>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    string gender;
    float nilai;
    Mahasiswa *next;
};

Mahasiswa *top = NULL;

//=== Fungsi Menambahkan Data ke Stack (Push) ===
void push() {
    Mahasiswa *baru = new Mahasiswa;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Masukkan Nama Mahasiswa      : ";
    getline(cin, baru->nama);
    cout << "Masukkan NIM Mahasiswa       : ";
    getline(cin, baru->nim);
    cout << "Masukkan Gender (L/P)        : ";
    getline(cin, baru->gender);
    cout << "Masukkan Nilai Struktur Data : ";
    cin >> baru->nilai;

    baru->next = top;
    top = baru;

    cout << "Data berhasil dimasukkan ke Stack." << endl;
}

//=== Fungsi Menghapus Data dari Stack (Pop) ===
void pop() {
    if (top == NULL) {
        cout << "Stack kosong, tidak ada data yang dapat dihapus." << endl;
        return;
    }

    Mahasiswa *hapus = top;
    cout << "Data \"" << hapus->nama 
         << "\" dengan NIM " << hapus->nim 
         << " telah dihapus." << endl;

    top = top->next;
    delete hapus;
}

//=== Fungsi Menampilkan Semua Data dalam Stack ===
void tampilStack() {
    if (top == NULL) {
        cout << "Stack kosong." << endl;
        return;
    }

    cout << "\n=== DATA MAHASISWA DALAM STACK ===" << endl;
    Mahasiswa *temp = top;
    while (temp != NULL) {
        cout << "---------------------------------------------" << endl;
        cout << "Nama   : " << temp->nama << endl;
        cout << "NIM    : " << temp->nim << endl;
        cout << "Gender : " << temp->gender << endl;
        cout << "Nilai  : " << temp->nilai << endl;
        temp = temp->next;
    }
    cout << "---------------------------------------------" << endl;
}

//=== Program Utama ===
int main() 
{   cout << "=== PROGRAM STACK LINKED LIST (DATA MAHASISWA) ===\n" << endl;
    for (int i=0; i<100; i++) cout << "="; 
    cout << endl;

    int pilihan;
    do {
        cout << "\nMenu Pilihan:" << endl;
        cout << "1. INSERT DATA" << endl;
        cout << "2. HAPUS DATA" << endl;
        cout << "3. CETAK DATA" << endl;
        cout << "4. EXIT" << endl;
        cout << "Pilih menu (1-4): ";
        cin >> pilihan;

        switch(pilihan) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: tampilStack(); break;
            case 4:
                cout << "\nTerima kasih telah menggunakan program ini!" << endl;
                break;
            default:
                cout << "Pilihan tidak tersedia!" << endl;
        }
    } while (pilihan != 4);
}
