#include <iostream>
#include <string>
#include <iomanip>
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
    cout << "Data dengan NIM " << targetNIM << " berhasil dihapus.\n\n";
}

void tampilkanSemuaData() {
    if (FIRST == NULL) {
        cout << "Tidak ada data.\n";
        return;
    }
    cout << left << setw(15) << "NIM" << setw(20) << "NAMA" << "NILAI" << endl;
    cout << "-------------------------------------------\n";
    Node* bantu = FIRST;
    while (bantu != NULL) {
        cout << left << setw(15) << bantu->NIM
             << setw(20) << bantu->NAMA
             << bantu->NILAI << endl;
        bantu = bantu->RIGHT;
    }
}

void tampilkanDataDenganNilai(int targetNilai) {
    Node* bantu = FIRST;
    bool ditemukan = false;
    cout << left << setw(15) << "NIM" << setw(20) << "NAMA" << "NILAI" << endl;
    cout << "-------------------------------------------\n";
    while (bantu != NULL) {
        if (bantu->NILAI == targetNilai) {
            cout << left << setw(15) << bantu->NIM
                 << setw(20) << bantu->NAMA
                 << bantu->NILAI << endl;
            ditemukan = true;
        }
        bantu = bantu->RIGHT;
    }
    if (!ditemukan)
        cout << "Tidak ada data dengan NILAI = " << targetNilai << endl;
}

float hitungRataRata() {
    if (FIRST == NULL) return 0;
    Node* bantu = FIRST;
    int total = 0, jumlah = 0;
    while (bantu != NULL) {
        total += bantu->NILAI;
        jumlah++;
        bantu = bantu->RIGHT;
    }
    return (float)total / jumlah;
}

void inputDataManual() {
    string nim, nama;
    int nilai;
    while (true) {
        cout << "NIM   : "; getline(cin, nim);
        if (nim.empty()) break;
        cout << "NAMA  : "; getline(cin, nama);
        cout << "NILAI : "; cin >> nilai;
        cin.ignore();
        insertData(nim, nama, nilai);
        cout << "Data berhasil ditambahkan!\n" << endl;
    }
}

void cetakGaris() {
	cout << endl;
    for (int i = 0; i < 100; i++) cout << "=";
    cout << endl;
}

int main() {
    // ===== Judul Utama =====
    cout << "=== PENGELOLAAN DATA MAHASISWA ===\n";
    cetakGaris();
    cout << endl;

    // ===== Catatan =====
    cout << "Catatan:\n - Program otomatis menambahkan data awal (Budi - 2007140022 - 90)\n - User dapat menambahkan data lain\n - Data disusun menaik berdasarkan NILAI\n - Kosongkan NIM untuk berhenti input.\n";
    cetakGaris();
    cout << endl;

    // ===== Data awal otomatis =====
    insertData("2007140022", "Budi", 90);

    // ===== A =====
    cout << "=== (A) PROGRAM MEMASUKKAN DATA BARU (INSERT) ===\n\n";
    inputDataManual();
    cetakGaris();
    cout << "--- HASIL EKSEKUSI (A) ---\n";
    tampilkanSemuaData();
    cetakGaris();
    cout << endl;

    // ===== B =====
    cout << "=== (B) PROGRAM MENAMPILKAN DATA DENGAN NILAI = 90 ===\n\n";
    tampilkanDataDenganNilai(90);
    cetakGaris();
    cout << endl;

    // ===== C =====
    cout << "=== (C) PROGRAM MENAMPILKAN SELURUH DATA MAHASISWA ===\n\n";
    tampilkanSemuaData();
    cetakGaris();
    cout << endl;

    // ===== D =====
    cout << "=== (D) PROGRAM MENGHAPUS DATA DENGAN NIM = 2007140022 ===\n\n";
    hapusData("2007140022");
    cout << "--- HASIL EKSEKUSI (D) ---\n";
    tampilkanSemuaData();
    cetakGaris();
    cout << endl;

    // ===== E =====
    cout << "=== (E) PROGRAM MENGHITUNG NILAI RATA-RATA KELAS ===\n\n";
    cout << "--- HASIL EKSEKUSI (E) ---\n";
    cout << "Rata-rata nilai kelas = " << hitungRataRata() << endl;
    cetakGaris();
    cout << "\nProgram selesai.\n";

    return 0;
}

