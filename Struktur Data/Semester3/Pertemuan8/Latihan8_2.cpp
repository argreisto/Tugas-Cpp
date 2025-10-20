#include <iostream>
using namespace std;
int main()
{   cout << "=== PROGRAM CIRI-CIRI KONDISI DOUBLE ENDED QUEUE (DEQUE) ===\n" << endl;
    for (int i=0; i<75; i++) cout << "=";
    cout << endl;

    int n = 10;
    int front, rear;
    	cout << "Catatan :" << endl;
    	cout << " - Double Ended Queue (Deque) memiliki kapasitas 10 data (indeks 0 sampai 9)." << endl;
    	cout << " - FRONT menunjukkan posisi depan (kiri) antrian." << endl;
    	cout << " - REAR menunjukkan posisi belakang (kanan) antrian." << endl;
    	cout << " - Data dapat dimasukkan dan dihapus dari kedua sisi." << endl;
    	cout << " - Jika FRONT = -1 dan REAR = -1 maka deque masih kosong." << endl;
    	cout << " - Jika FRONT = 0 maka tidak bisa diisi dari kiri (penuh kiri)." << endl;
    	cout << " - Jika REAR = n - 1 maka tidak bisa diisi dari kanan (penuh kanan)." << endl;
    	cout << " - Jika FRONT = 0 dan REAR = n - 1 maka deque penuh total." << endl << endl;

    	cout << "Proses Mengetahui Ciri Kondisi dimulai...\n" << endl;

    cout << "Masukkan nilai FRONT (-1 jika kosong, 0 sampai " << n - 1 << " jika berisi): ";
    cin >> front;
    cout << "Masukkan nilai REAR  (-1 jika kosong, 0 sampai " << n - 1 << " jika berisi): ";
    cin >> rear;
    cout << endl;

    if (front == -1 && rear == -1)
    {
        cout << "Kondisi Deque : KOSONG" << endl;
        cout << "Ciri-ciri     : Tidak ada data di dalam deque." << endl;
    }
    else if (rear == n - 1 && front == 0)
    {
        cout << "Kondisi Deque : PENUH TOTAL" << endl;
        cout << "Ciri-ciri     : Deque penuh dari kiri ke kanan, tidak bisa diisi lagi dari dua sisi.\n" << endl;

        cout << "Kondisi Tambahan : HANYA DIISI 10 PENGANTRI" << endl;
        cout << "Ciri-ciri        : Semua posisi deque sudah terisi 10 data (indeks 0 sampai 9)." << endl;
    }
    else if (rear == n - 1)
    {
        cout << "Kondisi Deque : PENUH KANAN" << endl;
        cout << "Ciri-ciri     : Tidak bisa diisi dari kanan karena REAR sudah di indeks terakhir." << endl;
    }
    else if (front == 0)
    {
        cout << "Kondisi Deque : PENUH KIRI" << endl;
        cout << "Ciri-ciri     : Tidak bisa diisi dari kiri karena FRONT sudah di indeks awal." << endl;
    }
    else
    {
        int jumlahIsi;
        if (front == -1)
            jumlahIsi = 0;
        else
            jumlahIsi = rear - front + 1;

        if (jumlahIsi == 10)
        {
            cout << "Kondisi Deque : HANYA DIISI 10 PENGANTRI" << endl;
            cout << "Ciri-ciri     : Semua posisi deque sudah terisi oleh 10 data." << endl;
        }
        else if (jumlahIsi == 0)
        {
            cout << "Kondisi Deque : KOSONG" << endl;
            cout << "Ciri-ciri     : Tidak ada data di dalam deque." << endl;
        }
        else
        {
            cout << "Kondisi Deque : ADA ISINYA" << endl;
            cout << "Ciri-ciri     : Deque berisi sebagian data dan masih bisa diisi dari kiri atau kanan." << endl;
        }
    }
    	cout << "\nProgram selesai." << endl;
}
