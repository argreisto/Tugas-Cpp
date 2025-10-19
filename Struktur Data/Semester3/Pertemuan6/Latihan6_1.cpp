#include <iostream>
using namespace std;
int main()
{   cout << "=== PROGRAM MENGISI ANTRIAN RECORD PER RECORD SEBELUM PENUH ===\n" << endl;
    for (int i = 0; i < 75; i++) cout << "=";
    cout << endl;

    string Queue[10];
    int front = 0;
    int rear = -1;
    int jumlah = 0;
		cout << "Masukkan data ke dalam antrian (maksimal 10 record)." << endl;
    	cout << "Pengisian berhenti otomatis jika antrian penuh." << endl << endl;
// PROSES ISI ANTRIAN
    while (rear < 9)
    {
        string data;
        cout << "Masukkan record ke-" << jumlah + 1 << " : ";
        cin >> data;                     // Input data dari pengguna

        rear = rear + 1;                 // Geser posisi REAR ke belakang
        Queue[rear] = data;              // Simpan data ke posisi REAR
        jumlah = jumlah + 1;             // Tambahkan penghitung jumlah record

        if (rear == 9)                   // Jika sudah mencapai indeks terakhir (penuh)
        {
            cout << endl << "Antrian penuh! Proses pengisian dihentikan." << endl;
            break;                       // Keluar dari perulangan
        }
    }
    	cout << "/nData dalam antrian :" << endl;
// Menampilkan seluruh isi antrian
    for (int i = front; i <= rear; i++)
    {
        cout << i + 1 << ". " << Queue[i] << endl;
    }
    	cout << "\nProses selesai." << endl;
}
