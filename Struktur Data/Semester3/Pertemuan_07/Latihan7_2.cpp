#include <iostream>
using namespace std;
int main()
{	cout << "=== PROGRAM INSERT DAN DELETE RECORD CIRCULAR QUEUE ===\n" << endl;
    for (int i = 0; i < 75; i++) cout << "=";
    cout << endl;

    string Queue[5];    
    int n = 5;         
    int front = -1;     
    int rear = -1;      
    string data;       
    	cout << "Catatan :" << endl;
    	cout << " - Circular Queue digunakan untuk menyimpan data secara melingkar." << endl;
    	cout << " - INSERT menambah data dari belakang (REAR)." << endl;
    	cout << " - DELETE menghapus data dari depan (FRONT)." << endl;
    	cout << " - Jika (REAR + 1) % n = FRONT maka antrian penuh." << endl;
    	cout << " - Jika FRONT = -1 maka antrian kosong.\n" << endl;

    	cout << "Proses Antrian dimulai...\n" << endl;
// ==============================================================
// BAGIAN 1 : INSERT Sebuah Record
// ==============================================================
    cout << "1. INSERT Record" << endl;

// Cek apakah antrian sudah penuh
    if ((rear + 1) % n == front)
    {
        cout << "Circular Queue penuh, tidak bisa menambah data.\n" << endl;
    }
    else
    {
// Jika belum penuh, input data baru dari pengguna
        cout << "Masukkan data yang ingin dimasukkan : ";
        cin >> data;

// Kondisi jika queue masih kosong
        if (front == -1 && rear == -1)
        {
            front = 0;  // FRONT dan REAR dimulai dari 0
            rear = 0;
        }
// Kondisi jika queue sudah berisi sebagian data
        else
        {
            rear = (rear + 1) % n;  // REAR bergerak maju secara melingkar
        }
// Masukkan data ke posisi REAR
        Queue[rear] = data;

// Tampilkan hasil
        cout << "Data \"" << data << "\" berhasil dimasukkan ke Circular Queue.\n" << endl;
    }
// ==============================================================
// BAGIAN 2 : DELETE Sebuah Record
// ==============================================================
    cout << "2. DELETE Record" << endl;

// Cek apakah antrian kosong
    if (front == -1)
    {
        cout << "Circular Queue kosong, tidak ada data yang dapat dihapus.\n" << endl;
    }
    else
    {
// Tampilkan data yang akan dihapus (posisi FRONT)
        cout << "Data \"" << Queue[front] << "\" dihapus dari Circular Queue." << endl;

// Jika hanya satu data tersisa (setelah dihapus jadi kosong)
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
// Jika masih ada data lain, geser FRONT ke posisi berikutnya
        else
        {
            front = (front + 1) % n;
        }
        	cout << "Data di depan antrian telah dihapus.\n" << endl;
    }
// ==============================================================
// Program berakhir
// ==============================================================
    	cout << "Program selesai." << endl;
}
