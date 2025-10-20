#include <iostream>
using namespace std;
int main()
{   cout << "=== PROGRAM MENGISI ANTRIAN DARI KANAN RECORD PER RECORD ===\n" << endl;
    for (int i = 0; i < 75; i++) cout << "=";
    cout << endl;

    string Deque[10];
    int front = -1;
    int rear = -1;
    int n = 10;
    string data;
    	cout << "Catatan :" << endl;
    	cout << " - Proses insert dilakukan satu per satu dari sisi kanan (REAR)." << endl;
    	cout << " - Jika REAR sudah mencapai indeks 9, maka antrian penuh kanan dan tidak bisa diisi lagi." << endl;
    	cout << " - FRONT dan REAR diinisialisasi dengan -1 (artinya antrian masih kosong)." << endl;
    	cout << " - Kapasitas maksimal deque adalah 10 data (indeks 0 sampai 9).\n" << endl;

    	cout << "Proses pengisian antrian dari kanan dimulai...\n" << endl;

    int jumlahIsi = 0;

    while (rear < n - 1 && jumlahIsi < 10)
    {
        cout << "Masukkan data ke-" << jumlahIsi + 1 << " : ";
        cin >> data;

        if (front == -1 && rear == -1)
        {
            front = 0;
            rear = 0;
        }
        else
        {
            rear = rear + 1;
        }
        	Deque[rear] = data;
        	jumlahIsi = jumlahIsi + 1;

        cout << "Record \"" << data << "\" berhasil dimasukkan ke indeks " << rear << "." << endl;

        if (rear == n - 1)
        {
            cout << endl;
            cout << "Deque sudah penuh kanan! Tidak bisa diisi lagi dari kanan." << endl;
            break;
        }
    }

    if (rear < n - 1)
    {
        cout << endl;
        cout << "Proses pengisian dihentikan sebelum penuh kanan." << endl;
        cout << "Masih ada ruang kosong di kanan." << endl;
    }

    cout << endl;
    cout << "Isi akhir deque:" << endl;
    if (front == -1)
    {
        cout << "Deque kosong." << endl;
    }
    else
    {
        for (int i = front; i <= rear; i++)
        {
            cout << "Index " << i << " : " << Deque[i] << endl;
        }
    }
    	cout << "\nProses selesai." << endl;
}
