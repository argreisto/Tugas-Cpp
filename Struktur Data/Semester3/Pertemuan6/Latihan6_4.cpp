#include <iostream>
using namespace std;
int main()
{	cout << "=== PROGRAM CIRI-CIRI KONDISI LINEAR QUEUE ===\n" << endl;
    for (int i = 0; i < 75; i++) cout << "=";
    cout << endl;

    int front, rear;
    	cout << "Catatan :" << endl;
    	cout << " - Linear Queue memiliki 10 data (indeks 0 sampai 9)." << endl;
    	cout << " - FRONT menunjukkan data paling depan." << endl;
    	cout << " - REAR menunjukkan data paling belakang." << endl;
    	cout << " - Jika REAR = -1 artinya antrian masih kosong." << endl;
    	cout << " - Jika REAR = 9 artinya posisi sudah paling akhir.\n" << endl;

    	cout << "Proses Mengetahui Ciri Kondisi dimulai...\n" << endl;
    
    cout << "Masukkan nilai FRONT (0 - 9): ";
    cin >> front;   
    cout << "Masukkan nilai REAR  (-1 - 9): ";
    cin >> rear;   
    cout << endl;
// 1. Kondisi Antrian Kosong
    if (rear == -1 || front > rear)
    {
        // Antrian kosong, tidak ada data
        cout << "Kondisi Queue : KOSONG" << endl;
        cout << "Ciri-ciri     : Tidak ada data di dalam antrian." << endl;
    }
// 2. Kondisi Antrian Penuh
    else if (rear == 9 && front == 0)
    {
    // Semua posisi terisi, tidak bisa menambah data baru
        cout << "Kondisi Queue : PENUH" << endl;
        cout << "Ciri-ciri     : Semua tempat sudah terisi, antrian tidak bisa diisi lagi." << endl;
    }
// 3. Kondisi Antrian Bisa Diisi dan Ada Isi
    else if (front == 0 && rear < 9)
    {
    // Masih ada ruang kosong di belakang
        cout << "Kondisi Queue : BISA DIISI" << endl;
        cout << "Ciri-ciri     : Antrian masih punya ruang kosong." << endl;

    // Tambahan info bahwa antrian sudah berisi sebagian data
        cout << endl;
        cout << "Kondisi Tambahan : ADA ISINYA" << endl;
        cout << "Ciri-ciri        : Antrian sudah berisi beberapa data, tapi belum penuh." << endl;
    }
// 4. Kondisi Antrian Ada Isinya dan Masih Bisa Diisi
    else if (front > 0 && rear < 9)
    {
        // Antrian sebagian terisi dan ruang belakang masih ada
        cout << "Kondisi Queue : ADA ISINYA" << endl;
        cout << "Ciri-ciri     : Antrian berisi sebagian data dan masih bisa diisi lagi." << endl;
    }
// 5. Kondisi Antrian Tak Bisa Diisi Lagi, Perlu Reset
    else if (rear == 9 && front > 0)
    {
    // REAR sudah di ujung, ada data depan yang sudah keluar
        cout << "Kondisi Queue : TAK BISA DIISI LAGI" << endl;
        cout << "Ciri-ciri     : REAR sudah di ujung kanan, tapi ada data depan yang sudah keluar." << endl;
        cout << "                Antrian tidak bisa diisi lagi tanpa di-reset." << endl << endl;
    // Antrian perlu direset agar bisa digunakan kembali
        cout << "Kondisi Tambahan : PERLU DIRESET" << endl;
        cout << "Ciri-ciri        : Antrian harus dikembalikan ke posisi awal agar bisa digunakan lagi." << endl;
    }
// 6. Kondisi Input Tidak Valid
    else
    {
        cout << "Nilai FRONT atau REAR tidak sesuai dengan kondisi antrian." << endl;
    }
    	cout << "\nProgram selesai." << endl;
}
