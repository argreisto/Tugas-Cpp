#include <iostream>
using namespace std;
int main()
{   cout << "=== PROGRAM MENGHITUNG JUMLAH TEMPAT YANG ADA ISINYA DAN SISA TEMPAT KOSONG (CIRCULAR QUEUE) ===\n" << endl;
    for (int i = 0; i < 75; i++) cout << "=";
    cout << endl;

    int n = 20;
    int front, rear;
    int jumlahIsi, sisaTempat;
    	cout << "Catatan :" << endl;
    	cout << " - Circular Queue memiliki kapasitas sebanyak 20 elemen (indeks 0 sampai 19)." << endl;
    	cout << " - FRONT menunjukkan posisi data paling depan (yang akan dilayani)." << endl;
    	cout << " - REAR menunjukkan posisi data paling belakang (yang terakhir dimasukkan)." << endl;
    	cout << " - Nilai FRONT dan REAR diisi antara 0 sampai 19." << endl;
    	cout << " - Rumus jumlah tempat berisi data  : ((REAR - FRONT + n) % n) + 1" << endl;
    	cout << " - Rumus jumlah tempat kosong       : n - jumlah tempat berisi data.\n" << endl;

    	cout << "Proses Menghitung dimulai...\n" << endl;

    cout << "Masukkan nilai FRONT (0 - 19): ";
    cin >> front;
    cout << "Masukkan nilai REAR  (0 - 19): ";
    cin >> rear;
    cout << endl;

    if (front == -1 && rear == -1)
    {
        cout << "Kondisi Queue : KOSONG" << endl;
        cout << "Tidak ada data di dalam antrian." << endl;
    }
    else
    {
        cout << "Kapasitas Circular Queue (n) : " << n << endl;
        cout << "Nilai FRONT                  : " << front << endl;
        cout << "Nilai REAR                   : " << rear << endl << endl;

        cout << "Hasil dari Perhitungan :" << endl;
    // PROSES MENGHITUNG JUMLAH TEMPAT BERISI 
        cout << "Rumus jumlah data berisi : ((REAR - FRONT + n) % n) + 1" << endl;
        jumlahIsi = ((rear - front + n) % n) + 1; // menghitung banyaknya data dalam queue
        cout << "Hasil perhitungan         = ((" << rear << " - " << front << " + " << n << ") % " << n << ") + 1" << endl;
        cout << "                          = " << jumlahIsi << endl << endl;
    //  PROSES MENGHITUNG SISA TEMPAT KOSONG 
        cout << "Rumus jumlah tempat kosong : n - jumlah berisi" << endl;
        sisaTempat = n - jumlahIsi; // menghitung sisa slot kosong dalam queue
        cout << "Hasil perhitungan          = " << n << " - " << jumlahIsi << endl;
        cout << "                           = " << sisaTempat << endl << endl;
    //  MENAMPILKAN HASIL AKHIR
        cout << "Jumlah tempat yang ada isinya     : " << jumlahIsi << endl;
        cout << "Jumlah tempat yang masih kosong   : " << sisaTempat << endl;
    }
    	cout << "\nProgram selesai." << endl;
}
