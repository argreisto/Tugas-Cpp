#include <iostream>
using namespace std;
int main()
{	cout << "=== PROGRAM MENGISI ANTRIAN RECORD CIRCULAR QUEUE PER RECORD SEBELUM PENUH ===\n" << endl;
    for (int i = 0; i < 75; i++) cout << "=";
    cout << endl;

    string Queue[10];
    int n = 10;
    int front = -1;
    int rear = -1;
    int jumlah = 0;
    	cout << "Catatan :" << endl;
    	cout << " - Circular Queue bersifat melingkar." << endl;
    	cout << " - Data dimasukkan satu per satu ke bagian belakang (REAR)." << endl;
    	cout << " - Maksimal akan diisi 10 record, proses berhenti jika antrian sudah penuh." << endl;
    	cout << " - Kondisi penuh terjadi jika (REAR + 1) % n = FRONT.\n" << endl;

    	cout << "Masukkan data ke dalam antrian (maksimal 10 record)." << endl;
    	cout << "Pengisian berhenti otomatis jika Circular Queue penuh." << endl << endl;
    
// PROSES PENGISIAN DATA KE CIRCULAR QUEUE
    for (int i = 0; i < 10; i++)
    {
// Cek apakah antrian sudah penuh
        if ((rear + 1) % n == front)
        {
            cout << endl << "Circular Queue sudah penuh! Pengisian dihentikan." << endl;
            break;
        }
    // Input data record
        string data;
        cout << "Masukkan record ke-" << jumlah + 1 << " : ";
        cin >> data;
    // Jika antrian masih kosong
        if (front == -1 && rear == -1)
        {
            front = 0;
            rear = 0;
        }
        else
        {
	// Geser posisi REAR secara melingkar
            rear = (rear + 1) % n;
        }
	// Simpan data ke posisi REAR
        Queue[rear] = data;
        jumlah++;
	// Cek ulang apakah antrian sudah penuh setelah insert
        if ((rear + 1) % n == front)
        {
            cout << endl << "Circular Queue penuh! Proses pengisian dihentikan." << endl;
            break;
        }
    }
// AKHIR PROSES PENGISIAN
    cout << endl;
    cout << "Data dalam Circular Queue :" << endl;

    if (front == -1)
    {
        cout << "Circular Queue masih kosong." << endl;
    }
    else
    {
        int i = front;
        int nomor = 1;
        while (true)
        {
            cout << nomor << ". " << Queue[i] << endl;
            if (i == rear)
                break;
            i = (i + 1) % n;
            nomor++;
        }
    }
	    cout << "\nProses selesai." << endl;
}
