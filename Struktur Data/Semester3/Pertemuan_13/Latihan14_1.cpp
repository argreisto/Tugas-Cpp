#include <iostream>
#include <string>
#include <limits>
#include <unistd.h> // untuk fungsi sleep()
using namespace std;

// Struktur Data Mahasiswa
struct Mahasiswa {
    string nama;
    string nim;
    string gender;
    float nilai;
    Mahasiswa *next;
};

Mahasiswa *head = NULL;

// Fungsi Membuat Node Baru
Mahasiswa* buatNode(string nama, string nim, string gender, float nilai) {
    Mahasiswa *baru = new Mahasiswa;
    baru->nama = nama;
    baru->nim = nim;
    baru->gender = gender;
    baru->nilai = nilai;
    baru->next = NULL;
    return baru;
}

// Fungsi Menambah Data (Insert)
void insertData() {
    string nama, nim, gender;
    float nilai;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "\nMasukkan Nama Mahasiswa      : ";
    getline(cin, nama);
    cout << "Masukkan NIM Mahasiswa       : ";
    getline(cin, nim);
    cout << "Masukkan Gender (L/P)        : ";
    getline(cin, gender);
    cout << "Masukkan Nilai Struktur Data : ";
    cin >> nilai;

    Mahasiswa *baru = buatNode(nama, nim, gender, nilai);

    if (head == NULL) {
        head = baru;
        baru->next = head; // Circular: menunjuk ke dirinya sendiri
    } 
    else if (nim < head->nim) {
        Mahasiswa *tail = head;
        while (tail->next != head)
            tail = tail->next;
        tail->next = baru;
        baru->next = head;
        head = baru;
    } 
    else {
        Mahasiswa *bantu = head;
        while (bantu->next != head && bantu->next->nim < nim)
            bantu = bantu->next;

        baru->next = bantu->next;
        bantu->next = baru;
    }

    cout << "\nData berhasil ditambahkan ke Circular Linked List.\n";
    sleep(1);
}

// Fungsi Menghapus Data berdasarkan NIM
void hapusData() {
    if (head == NULL) {
        cout << "\nCircular Linked List kosong.\n";
        return;
    }

    string nimCari;
    cout << "\nMasukkan NIM yang akan dihapus: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, nimCari);

    Mahasiswa *hapus = head, *prev = NULL;

    // Jika hanya satu node
    if (head->next == head && head->nim == nimCari) {
        cout << "\nMenghapus data: " << head->nama << " (" << head->nim << ")\n";
        delete head;
        head = NULL;
        return;
    }

    // Jika yang dihapus adalah head
    Mahasiswa *tail = head;
    while (tail->next != head)
        tail = tail->next;

    if (head->nim == nimCari) {
        cout << "\nMenghapus data: " << head->nama << " (" << head->nim << ")\n";
        tail->next = head->next;
        Mahasiswa *hapusHead = head;
        head = head->next;
        delete hapusHead;
        return;
    }

    // Mencari node lain
    hapus = head->next;
    prev = head;
    while (hapus != head && hapus->nim != nimCari) {
        prev = hapus;
        hapus = hapus->next;
    }

    if (hapus == head) {
        cout << "Data dengan NIM " << nimCari << " tidak ditemukan.\n";
        return;
    }

    cout << "\nMenghapus data: " << hapus->nama << " (" << hapus->nim << ")\n";
    prev->next = hapus->next;
    delete hapus;
    sleep(1);
}

// Fungsi Menampilkan Data
void tampilData() {
    if (head == NULL) {
        cout << "\nTidak ada data dalam Circular Linked List.\n";
        return;
    }

    cout << "\n=== DATA MAHASISWA DALAM CIRCULAR LINKED LIST ===\n";
    Mahasiswa *temp = head;
    do {
        cout << "--------------------------------------------------------\n";
        cout << "NIM     : " << temp->nim << endl;
        cout << "Nama    : " << temp->nama << endl;
        cout << "Gender  : " << temp->gender << endl;
        cout << "Nilai   : " << temp->nilai << endl;
        temp = temp->next;
    } while (temp != head);
    cout << "--------------------------------------------------------\n";
}

// Program Utama
int main() {
    int pilihan;

    cout << "=== PROGRAM CIRCULAR LINKED LIST (DATA MAHASISWA) ===\n";
    for (int i = 0; i < 100; i++) cout << "=";
    cout << endl;

    // Bagian Catatan
    cout << "Catatan :" << endl;
    cout << " - Insert Data : menambah data mahasiswa ke dalam Circular Linked List secara terurut naik berdasarkan NIM." << endl;
    cout << " - Hapus Data  : menghapus satu data berdasarkan NIM yang dicari." << endl;
    cout << " - Cetak Data  : menampilkan seluruh data mahasiswa dari node pertama kembali ke node pertama (melingkar)." << endl;
    cout << " - Exit        : keluar dari program." << endl;
    cout << "\nProses Circular Linked List dimulai...\n" << endl;

    do {
        cout << "Menu Pilihan:" << endl;
        cout << "1. INSERT DATA" << endl;
        cout << "2. HAPUS DATA" << endl;
        cout << "3. CETAK DATA" << endl;
        cout << "4. EXIT" << endl;
        cout << "Pilih menu (1-4): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                insertData();
                break;
            case 2:
                hapusData();
                break;
            case 3:
                tampilData();
                break;
            case 4:
                cout << "\nProgram selesai. Terima kasih.\n";
                break;
            default:
                cout << "Pilihan tidak tersedia.\n";
        }
    } while (pilihan != 4);

    return 0;
}
