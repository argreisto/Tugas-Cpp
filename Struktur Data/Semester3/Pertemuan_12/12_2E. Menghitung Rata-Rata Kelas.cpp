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

int main()
{
    cout << "=== (E) PROGRAM MENGHITUNG NILAI RATA-RATA KELAS PADA LINEAR DOUBLE LINKED LIST ===\n" << endl;
    for (int i = 0; i < 100; i++) cout << "=";
    cout << endl;

    cout << "Catatan :" << endl;
    cout << " - Program otomatis menambah data awal (Budi - 2007140022 - 90)." << endl;
    cout << " - User dapat menambah data mahasiswa lain secara manual." << endl;
    cout << " - Program akan menghitung dan menampilkan rata-rata nilai kelas." << endl;
    cout << " - Kosongkan NIM untuk berhenti menambah data.\n" << endl;

    for (int i = 0; i < 100; i++) cout << "=";
    cout << endl;
    cout << "--- ISI PROGRAM ---" << endl;
    cout << R"(
float hitungRataRata() {
   // Menghitung total nilai semua node dan membaginya dengan jumlah mahasiswa
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
	float rata = hitungRataRata();
	for (int i = 0; i < 100; i++) cout << "=";
    cout << endl;
	cout << "--- HITUNG RATA-RATA NILAI KELAS ---\n" << endl;
    cout << "Rata-rata nilai kelas = " << rata << endl;

    cout << "\nProgram selesai." << endl;
}


