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
    Mahasiswa *prev;
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
    baru->prev = baru->next = NULL;
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

    // Jika list kosong
    if (head == NULL) {
        head = baru;
        head->next = head;
        head->prev = head;
    } 
    // Jika list tidak kosong
    else {
        Mahasiswa *bantu = head;
        Mahasiswa *tail = head->prev;

        // Menyisipkan data secara terurut berdasarkan NIM
        if (nim < head->nim) {
            // sisip sebelum head
            baru->next = head;
            baru->prev = tail;
            head->prev = baru;
            tail->next = baru;
            head = baru;
        } 
        else {
            // mencari posisi
            while (bantu->next != head && bantu->next->nim < nim)
                bantu = bantu->next;

            baru->next = bantu->next;
            baru->prev = bantu;
            bantu->next->prev = baru;
            bantu->next = baru;
        }
    }

    cout << "\nData berhasil ditambahkan ke Circular Doubly Linked List.\n";
    sleep(1);
}

// Fungsi Menghapus Data berdasarkan NIM
void hapusData() {
    if (head == NULL) {
        cout << "\nCircular Doubly Linked List kosong.\n";
        return;
    }

    string nimCari;
    cout << "\nMasukkan NIM yang akan dihapus: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, nimCari);

    Mahasiswa *hapus = head;
    bool ditemukan = false;

    // Mencari node berdasarkan NIM
    do {
        if (hapus->nim == nimCari) {
            ditemukan = true;
            break;
        }
        hapus = hapus->next;
    } while (hapus != head);

    if (!ditemukan) {
        cout << "Data dengan NIM " << nimCari << " tidak ditemukan.\n";
        return;
    }

    cout << "\nMenghapus data: " << hapus->nama << " (" << hapus->nim << ")\n";

    // Jika hanya 1 node
    if (hapus->next == hapus && hapus->prev == hapus) {
        delete hapus;
        head = NULL;
    } 
    else {
        Mahasiswa *sebelum = hapus->prev;
        Mahasiswa *sesudah = hapus->next;
        sebelum->next = sesudah;
        sesudah->prev = sebelum;

        // Jika yang dihapus adalah head
        if (hapus == head)
            head = sesudah;

        delete hapus;
    }

    sleep(1);
}

// Fungsi Menampilkan Data
void tampilData() {
    if (head == NULL) {
        cout << "\nTidak ada data dalam Circular Doubly Linked List.\n";
        return;
    }

    cout << "\n=== DATA MAHASISWA DALAM CIRCULAR DOUBLY LINKED LIST ===\n";
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

    cout << "=== PROGRAM CIRCULAR DOUBLY LINKED LIST (DATA MAHASISWA) ===\n";
    for (int i = 0; i < 80; i++) cout << "=";
    cout << endl;

    // catatan
    cout << "Catatan :" << endl;
    cout << " - Circular Doubly Linked List: node terakhir menunjuk ke node pertama dan sebaliknya." << endl;
    cout << " - Insert Data : menambah data mahasiswa secara terurut naik berdasarkan NIM." << endl;
    cout << " - Hapus Data  : menghapus satu data berdasarkan NIM yang dicari." << endl;
    cout << " - Cetak Data  : menampilkan seluruh data dari node pertama kembali ke node pertama (melingkar dua arah)." << endl;
    cout << " - Exit        : keluar dari program.\n" << endl;
    cout << "Proses Circular Doubly Linked List dimulai...\n" << endl;

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
