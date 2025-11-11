#include <iostream>
#include <string>
using namespace std;

struct Node {
    string NIM;
    string NAMA;
    int NILAI;
    Node* LEFT;
    Node* RIGHT;
};

Node* FIRST = NULL;
Node* LAST = NULL;

void insertData(string nim, string nama, int nilai) {
    Node* baru = new Node;
    baru->NIM = nim;
    baru->NAMA = nama;
    baru->NILAI = nilai;
    baru->LEFT = baru->RIGHT = NULL;

    if (FIRST == NULL) {
        FIRST = LAST = baru;
    } else if (nilai < FIRST->NILAI) {
        baru->RIGHT = FIRST;
        FIRST->LEFT = baru;
        FIRST = baru;
    } else if (nilai >= LAST->NILAI) {
        baru->LEFT = LAST;
        LAST->RIGHT = baru;
        LAST = baru;
    } else {
        Node* bantu = FIRST;
        while (bantu->NILAI < nilai)
            bantu = bantu->RIGHT;
        baru->RIGHT = bantu;
        baru->LEFT = bantu->LEFT;
        bantu->LEFT->RIGHT = baru;
        bantu->LEFT = baru;
    }
}

int main()
{
    cout << "=== (C) PROGRAM MENAMPILKAN SELURUH DATA MAHASISWA PADA LINEAR DOUBLE LINKED LIST ===\n" << endl;
    for (int i = 0; i < 100; i++) cout << "=";
    cout << endl;

    cout << "Catatan :" << endl;
    cout << " - Program ini menambahkan data awal otomatis (Budi - 2007140022 - 90)." << endl;
    cout << " - Setelah itu, user mengetik data mahasiswa lain secara manual." << endl;
    cout << " - Data disusun otomatis menaik berdasarkan NILAI." << endl;
    cout << " - Program akan menampilkan semua data yang telah dimasukkan." << endl;
    cout << " - Kosongkan NIM untuk menghentikan input.\n" << endl;

    for (int i = 0; i < 100; i++) cout << "=";
    cout << endl;
    cout << "--- ISI PROGRAM ---" << endl;
    cout << R"(
int main() {
   // Data awal otomatis: Budi (2007140022, 90)
   // User menambah data lain secara manual
   // Menampilkan seluruh data dari FIRST ke LAST
}
)" << endl;

    for (int i = 0; i < 100; i++) cout << "=";
    cout << endl;
	cout << "--- HASIL EKSEKUSI PROGRAM ---\n" << endl;

    insertData("2007140022", "Budi", 90);
    cout << "Data awal otomatis: 2007140022 | Budi | NILAI = 90\n" << endl;

    string nim, nama;
    int nilai;
    cout << "Masukkan data mahasiswa lain (kosongkan NIM untuk berhenti)\n" << endl;

    while (true) {
        cout << "NIM   : "; getline(cin, nim);
        if (nim.empty()) break;
        cout << "NAMA  : "; getline(cin, nama);
        cout << "NILAI : "; cin >> nilai;
        cin.ignore();
        insertData(nim, nama, nilai);
        cout << "Data berhasil ditambahkan!\n" << endl;
    }

    for (int i = 0; i < 100; i++) cout << "=";
    cout << endl;
	cout << "--- SELURUH DATA MAHASISWA ---\n" << endl;

    Node* bantu = FIRST;
    while (bantu != NULL) {
        cout << bantu->NIM << " | " << bantu->NAMA << " | NILAI = " << bantu->NILAI << endl;
        bantu = bantu->RIGHT;
    }

    cout << "\nProgram selesai." << endl;
}

