#include <iostream>
using namespace std;
int main()
{   cout << "=== PROGRAM MENDELETE ANTRIAN RECORD PER RECORD DARI KANAN (DOUBLE ENDED QUEUE) ===\n" << endl;
    for (int i = 0; i < 75; i++) cout << "=";
    cout << endl;

    string Deque[10];
    int n;
    int front = 0;
    int rear;
    int jumlahHapus = 0;
	    cout << "Catatan :" << endl;
	    cout << " - Double Ended Queue (Deque) dapat dihapus dari kanan maupun kiri." << endl;
    	cout << " - Proses delete kali ini dilakukan satu per satu dari kanan (REAR)." << endl;
    	cout << " - Jika antrian sudah kosong, proses delete dihentikan." << endl;
    	cout << " - Kondisi kosong terjadi jika FRONT > REAR.\n" << endl;

		cout << "Program Mendelete Antrian dimulai...\n" << endl;
		
    cout << "Masukkan jumlah data awal dalam antrian (maksimal 10) : ";
    cin >> n;

    rear = n - 1;

    cout << endl;
    cout << "Masukkan data ke dalam antrian :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Record ke-" << i + 1 << " : ";
        cin >> Deque[i];
    }

    cout << "\nProses delete data dari kanan dimulai...\n" << endl;

    while (rear >= front && jumlahHapus < 10)
    {
        cout << "Record \"" << Deque[rear] << "\" dihapus dari antrian." << endl;
        rear = rear - 1;
        jumlahHapus = jumlahHapus + 1;

        if (rear < front)
        {
            cout << endl;
            cout << "Antrian sudah kosong! Proses delete dihentikan." << endl;
            break;
        }
    }

    if (jumlahHapus == 10 && rear >= front)
    {
        cout << endl;
        cout << "Telah menghapus sebanyak 10 record dari antrian." << endl;
    }
    	cout << "\nProses selesai." << endl;
}
