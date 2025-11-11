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
{	cout << "=== (A) PROGRAM MEMASUKKAN DATA BARU (INSERT) PADA LINEAR DOUBLE LINKED LIST ===\n" << endl;
    for (int i = 0; i < 100; i++) cout << "=";
    cout << endl;

    cout << "Catatan :" << endl;
    cout << " - Program ini menambahkan satu data awal otomatis (Budi - 2007140022 - 90)." << endl;
    cout << " - Setelah itu, user bisa mengetik data mahasiswa lain secara manual." << endl;
    cout << " - Data disusun otomatis menaik berdasarkan nilai (NILAI)." << endl;
    cout << " - Kosongkan NIM untuk menghentikan input.\n" << endl;

    //=== ISI PROGRAM DITAMPILKAN DI OUTPUT
    for (int i = 0; i < 100; i++) cout << "=";
    cout << endl;
    cout << "--- ISI PROGRAM ---" << endl;
    cout << R"(
struct Node { string NIM, NAMA; int NILAI; Node* LEFT; Node* RIGHT; };
void insertData(string nim, string nama, int nilai) {
   // Menyisipkan data berurutan berdasarkan NILAI
}
int main() {
   // Data awal otomatis: Budi (2007140022, NILAI=90)
   // User mengetik data mahasiswa lain setelahnya
}
)" << endl;

    //=== BAGIAN HASIL EKSEKUSI
    for (int i = 0; i < 100; i++) cout << "=";
    cout << endl;
	cout << "--- HASIL EKSEKUSI PROGRAM ---\n" << endl;
    
    // --- Data awal otomatis ---
    insertData("2007140022", "Budi", 90);
    cout << "Data awal otomatis berhasil dimasukkan: 2007140022 | Budi | NILAI = 90\n" << endl;

    // --- Input manual tambahan ---
    string nim, nama;
    int nilai;
    cout << "Sekarang masukkan data mahasiswa lain (kosongkan NIM untuk berhenti)\n" << endl;

    while (true) {
        cout << "NIM   : "; getline(cin, nim);
        if (nim.empty()) break;
        cout << "NAMA  : "; getline(cin, nama);
        cout << "NILAI : "; cin >> nilai;
        cin.ignore();
        insertData(nim, nama, nilai);
        cout << "Data berhasil ditambahkan!\n" << endl;
    }

    //=== Tampilkan hasil akhir
    for (int i = 0; i < 100; i++) cout << "=";
    cout << endl;
	cout << "--- DATA DALAM LINKED LIST (URUT NILAI NAIK) ---\n" << endl;

    Node* bantu = FIRST;
    while (bantu != NULL) {
        cout << bantu->NIM << " | " << bantu->NAMA << " | NILAI = " << bantu->NILAI << endl;
        bantu = bantu->RIGHT;
    }

    cout << "\nProgram selesai." << endl;
}

