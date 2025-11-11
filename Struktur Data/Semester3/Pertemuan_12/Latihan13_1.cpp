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
Mahasiswa *tail = NULL;

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

    if (head == NULL) {
        head = tail = baru;
    } else if (nim < head->nim) {
        baru->next = head;
        head->prev = baru;
        head = baru;
    } else if (nim > tail->nim) {
        tail->next = baru;
        baru->prev = tail;
        tail = baru;
    } else {
        Mahasiswa *bantu = head;
        while (bantu->nim < nim)
            bantu = bantu->next;
        Mahasiswa *sebelum = bantu->prev;
        sebelum->next = baru;
        baru->prev = sebelum;
        baru->next = bantu;
        bantu->prev = baru;
    }

    cout << "\nData berhasil ditambahkan.\n";
    sleep(1);
}

// Fungsi Menghapus Data di KIRI
void deleteKiri() {
    if (head == NULL) {
        cout << "\nLinked List kosong.\n";
        return;
    }

    Mahasiswa *hapus = head;
    cout << "\nMenghapus data paling kiri: " << hapus->nama << " (" << hapus->nim << ")\n";
    if (head == tail) {
        head = tail = NULL;
    } else {
        head = head->next;
        head->prev = NULL;
    }
    delete hapus;
    sleep(1);
}

// Fungsi Menghapus Data di KANAN
void deleteKanan() {
    if (tail == NULL) {
        cout << "\nLinked List kosong.\n";
        return;
    }

    Mahasiswa *hapus = tail;
    cout << "\nMenghapus data paling kanan: " << hapus->nama << " (" << hapus->nim << ")\n";
    if (head == tail) {
        head = tail = NULL;
    } else {
        tail = tail->prev;
        tail->next = NULL;
    }
    delete hapus;
    sleep(1);
}

// Fungsi Menghapus Data di TENGAH (berdasarkan NIM)
void deleteTengah() {
    if (head == NULL) {
        cout << "\nLinked List kosong.\n";
        return;
    }

    string nimCari;
    cout << "\nMasukkan NIM yang akan dihapus: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, nimCari);

    Mahasiswa *hapus = head;
    while (hapus != NULL && hapus->nim != nimCari)
        hapus = hapus->next;

    if (hapus == NULL) {
        cout << "Data dengan NIM " << nimCari << " tidak ditemukan.\n";
        return;
    }

    cout << "\nMenghapus data tengah: " << hapus->nama << " (" << hapus->nim << ")\n";

    if (hapus == head)
        deleteKiri();
    else if (hapus == tail)
        deleteKanan();
    else {
        hapus->prev->next = hapus->next;
        hapus->next->prev = hapus->prev;
        delete hapus;
    }
    sleep(1);
}

// Fungsi Menampilkan Data
void tampilData() {
    if (head == NULL) {
        cout << "\nTidak ada data dalam Linked List.\n";
        return;
    }

    cout << "\n=== DATA MAHASISWA DALAM LINEAR DOUBLY LINKED LIST ===\n";
    Mahasiswa *temp = head;
    while (temp != NULL) {
        cout << "--------------------------------------------------------\n";
        cout << "NIM     : " << temp->nim << endl;
        cout << "Nama    : " << temp->nama << endl;
        cout << "Gender  : " << temp->gender << endl;
        cout << "Nilai   : " << temp->nilai << endl;
        temp = temp->next;
    }
    cout << "--------------------------------------------------------\n";
}

// Program Utama
int main() {
    int pilihan;

    cout << "=== PROGRAM LINEAR DOUBLY LINKED LIST (LANJUTAN) ===\n";
    for (int i = 0; i < 80; i++) cout << "=";
    cout << endl;

    // Bagian Catatan
    cout << "Catatan :" << endl;
    cout << " - Insert Data: menambah data mahasiswa secara terurut naik berdasarkan NIM." << endl;
    cout << " - Delete Kiri: menghapus node pertama (paling kiri) dari Linked List." << endl;
    cout << " - Delete Kanan: menghapus node terakhir (paling kanan) dari Linked List." << endl;
    cout << " - Delete Tengah: menghapus node tertentu berdasarkan NIM yang dicari." << endl;
    cout << " - Cetak Data: menampilkan seluruh data mahasiswa dari head ke tail." << endl;
    cout << " - Exit: keluar dari program.\n" << endl;
    cout << "Proses Linked List dua arah dimulai...\n" << endl;

    do {
        cout << "Menu Pilihan:" << endl;
        cout << "1. INSERT DATA" << endl;
        cout << "2. DELETE KIRI" << endl;
        cout << "3. DELETE KANAN" << endl;
        cout << "4. DELETE TENGAH (BERDASARKAN NIM)" << endl;
        cout << "5. CETAK DATA" << endl;
        cout << "6. EXIT" << endl;
        cout << "Pilih menu (1-6): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                insertData();
                break;
            case 2:
                deleteKiri();
                break;
            case 3:
                deleteKanan();
                break;
            case 4:
                deleteTengah();
                break;
            case 5:
                tampilData();
                break;
            case 6:
                cout << "\nProgram selesai. Terima kasih.\n";
                break;
            default:
                cout << "Pilihan tidak tersedia.\n";
        }
    } while (pilihan != 6);

    return 0;
}
