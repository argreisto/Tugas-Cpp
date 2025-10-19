#include <iostream>
using namespace std;
int main()
{   cout << "=== PROGRAM MEDELETE ANTRIAN RECORD PER RECORD SELAMA MASIH ADA ISINYA ===\n" << endl;
    for (int i = 0; i < 75; i++) cout << "=";
    cout << endl;
  
    string Queue[10];   
    int front = 0;       
    int rear;         
    int n;               

	    cout << "Catatan :" << endl;
	    cout << " - Proses delete akan dilakukan satu per satu dari depan." << endl;
    	cout << " - Jika antrian sudah kosong, walaupun belum 10 record, maka proses dihentikan.\n" << endl;
		   
    	cout << "Masukkan jumlah data awal dalam antrian (maksimal 10) : ";
    	cin >> n;

    rear = n - 1;
    	cout << "\nMasukkan data ke dalam antrian :" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Record ke-" << i + 1 << " : ";
        cin >> Queue[i];
	}
    	cout << "\nProses delete data dari antrian dimulai...\n" << endl;

    int jumlahHapus = 0; 
// PROSES DELETE RECORD PER RECORD 
    while (front <= rear && jumlahHapus < 10)
    {
    // Menampilkan data yang dihapus dari antrian
        cout << "Record \"" << Queue[front] << "\" dihapus dari antrian." << endl;

        front = front + 1;       // Geser posisi FRONT ke depan (elemen terdepan dihapus)
        jumlahHapus = jumlahHapus + 1; // Tambah penghitung delete
    // Jika antrian sudah kosong (FRONT melewati REAR)
        if (front > rear)
        {
            cout << endl;
            cout << "Antrian sudah kosong! Proses delete dihentikan." << endl;
            break; // Hentikan perulangan
        }
    }
// Jika sudah menghapus 10 record tapi masih ada data tersisa
    if (jumlahHapus == 10 && front <= rear)
    {
        cout << endl;
        cout << "Telah menghapus sebanyak 10 record dari antrian." << endl;
    }
    cout << "\nProses selesai." << endl;
}
