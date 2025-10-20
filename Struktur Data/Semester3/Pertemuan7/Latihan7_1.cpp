#include <iostream>
using namespace std;
int main()
{   cout << "=== PROGRAM CIRI-CIRI KONDISI CIRCULAR QUEUE ===\n" << endl;
    for (int i = 0; i < 75; i++) cout << "=";
    cout << endl;

    int n = 20; 
    int front, rear; 
    	cout << "Catatan :" << endl;
    	cout << " - Circular Queue memiliki 20 data (indeks 0 sampai 19)." << endl;
    	cout << " - FRONT menunjukkan data paling depan (yang akan dilayani)." << endl;
    	cout << " - REAR menunjukkan data paling belakang (yang terakhir dimasukkan)." << endl;
    	cout << " - Jika FRONT = -1 dan REAR = -1 artinya antrian masih kosong." << endl;
    	cout << " - Jika (REAR + 1) % n = FRONT artinya antrian penuh." << endl;
    	cout << " - Bila REAR sudah mencapai akhir, maka akan melingkar kembali ke awal (REAR = 0)." << endl;
    	cout << " - Nilai FRONT dan REAR diisi antara 0 sampai " << n - 1 << ".\n" << endl;

    	cout << "Proses Mengetahui Ciri Kondisi dimulai...\n" << endl;

    cout << "Masukkan nilai FRONT (0 - " << n - 1 << ", atau -1 jika kosong): ";
    cin >> front;
    cout << "Masukkan nilai REAR  (0 - " << n - 1 << ", atau -1 jika kosong): ";
    cin >> rear;
    cout << endl;
// ==============================================================
// a. Kondisi KOSONG
//    FRONT = -1 dan REAR = -1
//    Artinya belum ada data yang dimasukkan ke antrian.
// ==============================================================
    if (front == -1 && rear == -1)							
    {
        cout << "Kondisi Queue : KOSONG" << endl;
        cout << "Ciri-ciri     : Tidak ada data di dalam antrian." << endl;
    }
// ==============================================================
// b. Kondisi PENUH
//    Jika (REAR + 1) % n = FRONT
//    Semua posisi sudah terisi penuh, tidak bisa menambah data lagi.
// ==============================================================
    else if ((rear + 1) % n == front)
    {
        cout << "Kondisi Queue : PENUH" << endl;
        cout << "Ciri-ciri     : Semua tempat sudah terisi, Circular Queue penuh." << endl;
        cout << endl;
        cout << "Kondisi Tambahan : TAK BISA DIISI LAGI" << endl;
        cout << "Ciri-ciri        : Semua posisi sudah terpakai. Harus ada data yang keluar dulu sebelum bisa diisi lagi." << endl;
    }
// ==============================================================
// c. Kondisi BISA DIISI
//    Jika FRONT = -1 (belum ada data), queue siap diisi data pertama.
// ==============================================================
    else if (front == -1)
    {
        cout << "Kondisi Queue : BISA DIISI" << endl;
        cout << "Ciri-ciri     : Circular Queue masih kosong dan siap diisi data pertama." << endl;
    }
// ==============================================================
// d. Kondisi ADA ISINYA
//    Queue berisi sebagian data dan masih memiliki ruang kosong.
// ==============================================================
    else
    {
// Hitung jumlah isi dan ruang kosong
        int jumlahIsi = ((rear - front + n) % n) + 1;
        int sisaKosong = n - jumlahIsi;
// ==============================================================
// e. Kondisi HANYA BERISI 10 RECORD
//    Jika jumlah isi data = 10
// ==============================================================
        if (jumlahIsi == 10 && sisaKosong == 10)
        {
            cout << "Kondisi Queue : HANYA BERISI 10 RECORD" << endl;
            cout << "Ciri-ciri     : Circular Queue sekarang berisi 10 data." << endl << endl;
            cout << "Kondisi Tambahan : TEMPAT KOSONG HANYA 10 TEMPAT" << endl;
            cout << "Ciri-ciri        : Sisa ruang kosong hanya tinggal 10 posisi di Circular Queue." << endl;
        }
// Jika hanya berisi 10 record tanpa kondisi tambahan
        else if (jumlahIsi == 10)
        {
            cout << "Kondisi Queue : HANYA BERISI 10 RECORD" << endl;
            cout << "Ciri-ciri     : Circular Queue sekarang berisi 10 data." << endl;
        }
// ==============================================================
// f. Kondisi TEMPAT KOSONG HANYA 10 TEMPAT
//    Jika sisa ruang kosong = 10
// ==============================================================
        else if (sisaKosong == 10)
        {
            cout << "Kondisi Queue : TEMPAT KOSONG HANYA 10 TEMPAT" << endl;
            cout << "Ciri-ciri     : Sisa ruang kosong hanya tinggal 10 posisi di Circular Queue." << endl;
        }
// ==============================================================
// Kondisi umum: Ada isi dan masih bisa ditambah data
// ==============================================================
        else
        {
            cout << "Kondisi Queue : ADA ISINYA" << endl;
            cout << "Ciri-ciri     : Circular Queue sudah berisi sebagian data dan masih bisa diisi lagi." << endl;

            if (sisaKosong < 10)
            {
                cout << endl;
                cout << "Kondisi Tambahan : TEMPAT HAMPIR PENUH" << endl;
                cout << "Ciri-ciri        : Ruang kosong tersisa kurang dari 10 posisi, antrian hampir penuh." << endl;
            }
            else
            {
                cout << endl;
                cout << "Kondisi Tambahan : MASIH ADA RUANG" << endl;
                cout << "Ciri-ciri        : Data masih bisa ditambahkan sebelum antrian penuh." << endl;
            }
        }
    }
    	cout << "\nProgram selesai." << endl;
}
