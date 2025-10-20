#include <iostream>
using namespace std;
int main()
{   cout << "=== PROGRAM MENGISI ANTRIAN RECORD DOUBLE ENDED QUEUE PER RECORD SEBELUM PENUH KANAN ===\n" << endl;
    for (int i = 0; i < 75; i++) cout << "=";
    cout << endl;

    string Deque[10];
    int n = 10;
    int front = -1;
    int rear = -1;
    int jumlah = 0;
    	cout << "Catatan :" << endl;
    	cout << " - Double Ended Queue (Deque) dapat diisi dari kanan maupun kiri." << endl;
    	cout << " - Dalam program ini, data dimasukkan satu per satu dari sisi kanan (REAR)." << endl;
    	cout << " - Kapasitas maksimal deque adalah 10 record (indeks 0 sampai 9)." << endl;
    	cout << " - Proses berhenti jika deque sudah penuh kanan (REAR = 9)." << endl;
    	cout << " - Jika REAR sudah mencapai indeks terakhir (9), maka tidak bisa diisi lagi dari kanan.\n" << endl;
		
    cout << "Masukkan data ke dalam deque (maksimal 10 record)." << endl;
    cout << "Pengisian berhenti otomatis jika deque sudah penuh kanan." << endl << endl;

    for (int i = 0; i < 10; i++)
    {
        if (rear == n - 1)
        {
            cout << endl << "Deque sudah penuh kanan! Pengisian dihentikan." << endl;
            break;
        }

        string data;
        cout << "Masukkan record ke-" << jumlah + 1 << " : ";
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
        	jumlah++;

        if (rear == n - 1)
        {
            cout << endl << "Deque penuh kanan! Proses pengisian dihentikan." << endl;
            break;
        }
    }
    	cout << endl;
    	cout << "Data dalam Double Ended Queue :" << endl;

    if (front == -1)
    {
        cout << "Deque masih kosong." << endl;
    }
    else
    {
        int nomor = 1;
        for (int i = front; i <= rear; i++)
        {
            cout << nomor << ". " << Deque[i] << endl;
            nomor++;
        }
    }
    cout << "\nProses selesai." << endl;
}
