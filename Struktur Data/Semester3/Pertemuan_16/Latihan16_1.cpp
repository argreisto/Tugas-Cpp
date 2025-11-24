#include <iostream>
using namespace std;

int main()
{	cout << "=== JAWABAN NOMOR 1 (Pencarian dengan Binary Search) ===\n" << endl;
    for (int i = 0; i < 75; i++) cout << "=";
    cout << endl;
    	cout << "Catatan :" << endl;
    	cout << " - Data pada soal sudah dalam keadaan terurut." << endl;
    	cout << " - Binary Search bekerja dengan membagi dua bagian data setiap iterasi." << endl;
   		cout << " - Nilai tengah (MID) akan dibandingkan dengan nilai yang dicari." << endl;
    	cout << " - Jika lebih kecil, pencarian bergeser ke kiri. Jika lebih besar, bergeser ke kanan." << endl;
    	cout << " - Tabel data harus ditampilkan terlebih dahulu seperti yang ada di soal.\n" << endl;

    int data[10] = {5, 7, 12, 15, 17, 19, 22, 25, 27, 32};

// Tampilkan tabel data
    cout << "TABEL DATA (Sesuai Soal):\n" << endl;

    cout << "Index :  ";
    for (int i = 0; i < 10; i++) cout << i << "\t";
    cout << endl;

    cout << "Data  :  ";
    for (int i = 0; i < 10; i++) cout << data[i] << "\t";
    cout << "\n\n";

// ===== Pencarian N = 17 =====
    cout << "a. Pencarian nilai N = 17\n" << endl;

    int low = 0, high = 9, mid, iter = 0, cari;

    cari = 17;

    while (low <= high)
    {
        iter++;
        mid = (low + high) / 2;

        cout << "Iterasi ke-" << iter << endl;
        cout << "  Low  = " << low  << " (data: " << data[low]  << ")" << endl;
        cout << "  High = " << high << " (data: " << data[high] << ")" << endl;
        cout << "  Mid  = " << mid  << " (data: " << data[mid]  << ")" << endl;

        if (data[mid] == cari)
        {
            cout << "=> Nilai 17 ditemukan pada iterasi ke-" << iter
                 << " (index " << mid << ")\n" << endl;
            break;
        }
        else if (cari < data[mid])
        {
            cout << "=> 17 lebih kecil dari data[mid], geser ke kiri.\n" << endl;
            high = mid - 1;
        }
        else
        {
            cout << "=> 17 lebih besar dari data[mid], geser ke kanan.\n" << endl;
            low = mid + 1;
        }
    }

// ===== Pencarian N = 22 =====
    cout << "b. Pencarian nilai N = 22\n" << endl;

    low = 0;
    high = 9;
    iter = 0;
    cari = 22;

    while (low <= high)
    {
        iter++;
        mid = (low + high) / 2;

        cout << "Iterasi ke-" << iter << endl;
        cout << "  Low  = " << low  << " (data: " << data[low]  << ")" << endl;
        cout << "  High = " << high << " (data: " << data[high] << ")" << endl;
        cout << "  Mid  = " << mid  << " (data: " << data[mid]  << ")" << endl;

        if (data[mid] == cari)
        {
            cout << "=> Nilai 22 ditemukan pada iterasi ke-" << iter
                 << " (index " << mid << ")\n" << endl;
            break;
        }
        else if (cari < data[mid])
        {
            cout << "=> 22 lebih kecil dari data[mid], geser ke kiri.\n" << endl;
            high = mid - 1;
        }
        else
        {
            cout << "=> 22 lebih besar dari data[mid], geser ke kanan.\n" << endl;
            low = mid + 1;
        }
    } cout << "Proses Selesai." << endl;
}
