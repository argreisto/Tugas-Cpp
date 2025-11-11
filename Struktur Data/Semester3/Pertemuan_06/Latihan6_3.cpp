#include <iostream>
using namespace std;
int main()
{	cout << "=== PROGRAM DASAR OPERASI ANTRIAN (INISIALISASI, INSERT, DELETE, RESET) ===\n" << endl;
    for (int i = 0; i < 75; i++) cout << "=";
    cout << endl;
    
    string Queue[10];  
    int front, rear;    
    string data;        
    	cout << "Catatan :" << endl;
    	cout << " - Inisialisasi: mengatur kondisi awal antrian kosong." << endl;
    	cout << " - Insert: menambah data ke antrian dari belakang (Rear)." << endl;
    	cout << " - Delete: menghapus data dari depan (Front)." << endl;
    	cout << " - Reset: mengosongkan kembali seluruh isi antrian.\n" << endl;
    	cout << "Proses Antrian dimulai...\n" << endl;
// 1. Inisialisasi Antrian
    cout << "1. Inisialisasi Antrian" << endl;
    front = 0;  // Menentukan posisi awal antrian
    rear = -1;  // Menandakan antrian kosong
    cout << "Antrian telah diinisialisasi dalam keadaan kosong.\n" << endl;
// 2. Insert Record
    cout << "2. Insert Record" << endl;
    if (rear == 9)
    {
    // Kondisi ketika antrian sudah penuh
        cout << "Antrian penuh, tidak bisa menambah data baru.\n" << endl;
    }
    else
    {
    // Memasukkan data baru ke antrian
        cout << "Masukkan data yang akan dimasukkan ke antrian : ";
        cin >> data;           // Input data dari pengguna
        rear = rear + 1;       // Geser pointer REAR ke posisi baru
        Queue[rear] = data;    // Simpan data di posisi REAR
        cout << "Data \"" << data << "\" berhasil dimasukkan ke antrian.\n" << endl;
    }
// 3. Delete Record
    cout << "3. Delete Record" << endl;
    if (front > rear)
    {
    // Kondisi ketika antrian kosong
        cout << "Antrian kosong, tidak ada data yang dapat dihapus.\n" << endl;
    }
    else
    {
    // Menghapus data di depan antrian
        cout << "Data \"" << Queue[front] << "\" dihapus dari antrian." << endl;
        front = front + 1;   // Geser pointer FRONT ke depan
        cout << "Data di depan antrian telah dihapus.\n" << endl;
    }
// 4. Reset Antrian
    cout << "4. Reset" << endl;
    front = 0;  	// Kembalikan pointer FRONT ke awal
    rear = -1;  	// Tandai antrian kosong
    cout << "Semua data dihapus, antrian dikembalikan ke kondisi kosong.\n" << endl;

    	cout << "Program selesai." << endl;
}
