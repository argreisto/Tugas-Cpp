#include <iostream>
#include <string>
#include <limits>
#include <unistd.h> // untuk usleep (delay)
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    string gender;
    float nilai;
    Mahasiswa *next;
};

// Stack TANPA HEAD (hanya top)
Mahasiswa *top = NULL;

//=== Fungsi Animasi Sederhana ===
void animasi(const string &text) {
    for (char c : text) {
        cout << c << flush;
        usleep(30000); // delay 0.03 detik
    }
    cout << endl;
}

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

    // Logika Stack
    baru->next = top;
    top = baru;

    animasi("\n[+] Memasukkan data ke Stack...");
    cout << "Data berhasil dimasukkan ke Stack.\n";
}

//=== Fungsi Menghapus Data dari Stack (Pop) ===
void pop() {
    if (top == NULL) {
        cout << "\nStack kosong, tidak ada data yang dapat dihapus.\n";
        return;
    }

    Mahasiswa *hapus = top;

    animasi("\n[-] Menghapus data teratas...");
    cout << "Data \"" << hapus->nama << "\" (NIM: " << hapus->nim << ") telah dihapus.\n";

    top = top->next;
    delete hapus;
}

//=== Fungsi Menampilkan Isi Stack dengan Animasi ===
void tampilStack() {
    if (top == NULL) {
        cout << "\nStack kosong.\n";
        return;
    }

    cout << "\n=== DATA MAHASISWA DALAM STACK ===\n";

    Mahasiswa *temp = top;
    int i = 1;

    while (temp != NULL) {
        cout << "---------------------------------------------\n";
        cout << "Data ke-" << i << endl;
        cout << "Nama   : " << temp->nama << endl;
        cout << "NIM    : " << temp->nim << endl;
        cout << "Gender : " << temp->gender << endl;
        cout << "Nilai  : " << temp->nilai << endl;
        temp = temp->next;
        i++;

        // animasi delay tiap node
        usleep(50000);
    }
    cout << "---------------------------------------------\n";
}

//=== Menu Program Utama ===
int main() 
{   cout << "=== PROGRAM STACK LINKED LIST TANPA HEAD (DATA MAHASISWA) ===\n";
    for (int i = 0; i < 100; i++) cout << "=";
    cout << endl;

    int pilihan;

    do {
        cout << "\nMenu Pilihan:\n";
        cout << "1. INSERT DATA\n";
        cout << "2. HAPUS DATA\n";
        cout << "3. CETAK DATA\n";
        cout << "4. EXIT\n";
        cout << "Pilih menu (1-4): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                tampilStack();
                break;
            case 4:
                cout << "\nTerima kasih telah menggunakan program ini!\n";
                break;
            default:
                cout << "Pilihan tidak tersedia!\n";
        }

    } while (pilihan != 4);
}
