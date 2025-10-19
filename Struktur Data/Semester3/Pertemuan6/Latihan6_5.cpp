#include <iostream>
using namespace std;
int main()
{	cout << "=== PROGRAM MENGHITUNG JUMLAH PENGANTRI DAN KOLOM YANG MASIH BISA DIISI ===\n" << endl;
    for (int i = 0; i < 75; i++) cout << "=";
    cout << endl;

    int n = 100;
    int front, rear;
    int jumlahPengantri, sisaKolom;
    	cout << "Catatan :" << endl;
    	cout << " - Kapasitas antrian (n) = 100." << endl;
    	cout << " - FRONT menunjukkan posisi data paling depan (yang akan dilayani)." << endl;
    	cout << " - REAR menunjukkan posisi data paling belakang (yang terakhir masuk)." << endl;
    	cout << " - Nilai FRONT : 0 sampai 99." << endl;
    	cout << " - Nilai REAR  : 0 sampai 99." << endl;
    	cout << " - REAR tidak boleh lebih kecil dari FRONT." << endl << endl;

    	cout << "Proses Menghitung dimulai...\n" << endl;

    cout << "Masukkan nilai FRONT (0 - 99): ";
    cin >> front;
    cout << "Masukkan nilai REAR  (0 - 99): ";
    cin >> rear;
    cout << endl;

    if (rear < front)
    {
        cout << "Kondisi tidak valid: REAR tidak boleh lebih kecil dari FRONT." << endl;
    }
    else
    {
        cout << "Kapasitas Antrian (n) : " << n << endl;
        cout << "Nilai FRONT           : " << front << endl;
        cout << "Nilai REAR            : " << rear << endl;
        cout << endl;

        cout << "Hasil dari Perhitungan :" << endl;

    // a. Menghitung jumlah pengantri yang belum dilayani
        cout << "Rumus jumlah pengantri : (REAR - FRONT + 1)" << endl; 
        jumlahPengantri = rear - front + 1; 	// Proses perhitungan jumlah pengantri
        cout << "Hasil perhitungan      = (" << rear << " - " << front << " + 1) " << endl;
        cout << "                       = " << jumlahPengantri << endl;
        cout << "Jumlah pengantri yang belum dilayani  : " << jumlahPengantri << endl << endl;

    // b. Menghitung jumlah kolom / posisi yang masih bisa diisi
        cout << "Rumus sisa kolom kosong : (n - REAR - 1)" << endl; 
        sisaKolom = n - rear - 1; 	// Proses perhitungan sisa kolom kosong
        cout << "Hasil perhitungan       = (" << n << " - " << rear << " - 1)" << endl;
        cout << "                        = "<< sisaKolom << endl;
        cout << "Jumlah kolom yang masih bisa diisi  : " << sisaKolom << endl;
    }
    	cout << "\nProgram selesai." << endl;
}
