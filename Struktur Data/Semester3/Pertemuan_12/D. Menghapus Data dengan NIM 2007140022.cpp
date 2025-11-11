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

void hapusData(string targetNIM) {
    Node* bantu = FIRST;
    while (bantu != NULL && bantu->NIM != targetNIM)
        bantu = bantu->RIGHT;

    if (bantu == NULL) {
        cout << "Data dengan NIM " << targetNIM << " tidak ditemukan.\n";
        return;
    }

    if (bantu == FIRST) {
        FIRST = FIRST->RIGHT;
        if (FIRST != NULL) FIRST->LEFT = NULL;
    } else if (bantu == LAST) {
        LAST = LAST->LEFT;
        if (LAST != NULL) LAST->RIGHT = NULL;
    } else {
        bantu->LEFT->RIGHT = bantu->RIGHT;
        bantu->RIGHT->LEFT = bantu->LEFT;
    }

    delete bantu;
    cout << "Data dengan NIM " << targetNIM << " berhasil dihapus.\n";
}

int main()
{
    cout << "=== (D) PROGRAM MENGHAPUS DATA DENGAN NIM = 2007140022 PADA LINEAR DOUBLE LINKED LIST ===\n" << endl;
    for (int i = 0; i < 100; i++) cout << "=";
    cout << endl;

    cout << "Catatan :" << endl;
    cout << " - Program otomatis menambah data awal (Budi - 2007140022 - 90)." << endl;
    cout << " - User dapat menambah data lain manual." << endl;
    cout << " - Setelah itu, data dengan NIM = 2007140022 akan dihapus dari daftar." << endl;
    cout << " - Kosongkan NIM untuk berhenti menambah data.\n" << endl;

    for (int i = 0; i < 100; i++) cout << "=";
    cout << endl;
    cout << "--- ISI PROGRAM ---" << endl;
    cout << R"(
void hapusData(string targetNIM) {
   // Menghapus node dengan NIM tertentu dari Double Linked List
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

    hapusData("2007140022");

    for (int i = 0; i < 100; i++) cout << "=";
    cout << endl;
	cout << "--- DATA SETELAH PENGHAPUSAN ---\n" << endl;

    Node* bantu = FIRST;
    while (bantu != NULL) {
        cout << bantu->NIM << " | " << bantu->NAMA << " | NILAI = " << bantu->NILAI << endl;
        bantu = bantu->RIGHT;
    }

    cout << "\nProgram selesai." << endl;
}

