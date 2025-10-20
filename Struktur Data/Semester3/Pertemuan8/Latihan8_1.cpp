#include <iostream>
using namespace std;
int main()
{	cout << "=== PROGRAM DASAR DOUBLE ENDED QUEUE (DEQUE) ===\n" << endl;
    for (int i = 0; i < 75; i++) cout << "=";
    cout << endl;

    string Deque[10];
    int front, rear;
    string data;
    	cout << "Catatan :" << endl;
    	cout << " - Double Ended Queue (Deque) memiliki kapasitas 10 data (indeks 0 sampai 9)." << endl;
    	cout << " - FRONT menunjukkan posisi depan antrian." << endl;
    	cout << " - REAR menunjukkan posisi belakang antrian." << endl;
    	cout << " - Data dapat dimasukkan dan dihapus dari kedua sisi (kiri dan kanan)." << endl;
    	cout << " - Jika FRONT = -1 dan REAR = -1 maka deque masih kosong." << endl << endl;

    cout << "1. Inisialisasi" << endl;
    front = -1;
    rear = -1;
    	cout << "Deque telah diinisialisasi dalam keadaan kosong." << endl << endl;

    cout << "2. Insert Record dari Kanan" << endl;
    if (rear == 9)
    {
        cout << "Deque penuh, tidak bisa menambah dari kanan." << endl << endl;
    }
    else
    {
        cout << "Masukkan data yang akan dimasukkan dari kanan : ";
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
        	cout << "Data \"" << data << "\" berhasil dimasukkan dari kanan." << endl << endl;
    }

    cout << "3. Insert Record dari Kiri" << endl;
    if (front == 0)
    {
        cout << "Tidak bisa menambah dari kiri karena FRONT sudah di posisi awal." << endl << endl;
    }
    else
    {
        cout << "Masukkan data yang akan dimasukkan dari kiri : ";
        cin >> data;

        if (front == -1 && rear == -1)
        {
            front = 0;
            rear = 0;
        }
        else
        {
            front = front - 1;
        }
        	Deque[front] = data;
        	cout << "Data \"" << data << "\" berhasil dimasukkan dari kiri." << endl;
    }

    cout << "4. Delete Record dari Kanan" << endl;
    if (front == -1 && rear == -1)
    {
        cout << "Deque kosong, tidak ada data yang bisa dihapus dari kanan." << endl;
    }
    else
    {
        cout << "Data \"" << Deque[rear] << "\" dihapus dari kanan." << endl;
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            rear = rear - 1;
        }
        	cout << "Data berhasil dihapus dari kanan.\n" << endl;
    }

    cout << "5. Delete Record dari Kiri" << endl;
    if (front == -1 && rear == -1)
    {
        cout << "Deque kosong, tidak ada data yang bisa dihapus dari kiri." << endl;
    }
    else
    {
        cout << "Data \"" << Deque[front] << "\" dihapus dari kiri." << endl;
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front = front + 1;
        }
        cout << "Data berhasil dihapus dari kiri." << endl;
    }
    	cout << "\nProgram selesai." << endl;
}
