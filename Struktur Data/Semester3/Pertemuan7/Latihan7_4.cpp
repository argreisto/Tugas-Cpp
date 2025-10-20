#include <iostream>
using namespace std;
int main()
{	cout << "=== PROGRAM MENGHAPUS ANTRIAN RECORD PER RECORD SELAMA MASIH ADA ISINYA (CIRCULAR QUEUE) ===\n" << endl;
    for (int i = 0; i < 75; i++) cout << "=";
    cout << endl;

    string Queue[10];
    int n;
    int front = 0;
    int rear;
    int jumlahHapus = 0;
    	cout << "Catatan :" << endl;
    	cout << " - Circular Queue bersifat melingkar." << endl;
    	cout << " - Proses delete dilakukan satu per satu dari depan (FRONT)." << endl;
    	cout << " - Jika antrian sudah kosong, walaupun belum 10 record, proses dihentikan." << endl;
    	cout << " - Kondisi kosong terjadi jika FRONT = -1.\n" << endl;

    	cout << "Masukkan jumlah data awal dalam antrian (maksimal 10) : ";
    	cin >> n;

    rear = n - 1;
  	 	cout << "\nMasukkan data ke dalam antrian :" << endl;
    	
    for (int i = 0; i < n; i++)
    {
        cout << "Record ke-" << i + 1 << " : ";
        cin >> Queue[i];
    }
    cout << "\nProses delete data dari Circular Queue dimulai...\n" << endl;
// PROSES DELETE DATA DARI CIRCULAR QUEUE
    while (front <= rear && jumlahHapus < 10)
    {        
	// Tampilkan data yang akan dihapus
        cout << "Record \"" << Queue[front] << "\" dihapus dari antrian." << endl;

    // Geser posisi FRONT untuk menghapus data dari depan
        front = front + 1;
	// Tambah penghitung jumlah record yang dihapus
        jumlahHapus = jumlahHapus + 1;
	// Jika posisi FRONT melewati REAR, berarti queue sudah kosong
        if (front > rear)
        {
            cout << endl;
            cout << "Circular Queue sudah kosong! Proses delete dihentikan." << endl;
            break;
        }
    }
// AKHIR PROSES DELETE 

// Jika sudah menghapus 10 record
    if (jumlahHapus == 10 && front <= rear)
    {
        cout << endl;
        cout << "Telah menghapus sebanyak 10 record dari Circular Queue." << endl;
    }
    	cout << "\nProses selesai." << endl;
}
