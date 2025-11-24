#include <iostream>
using namespace std;

int main()
{	cout << "=== JAWABAN NOMOR 2 (Algoritma Binary Search) ===\n" << endl;
    for (int i = 0; i < 100; i++) cout << "=";
    cout << endl;
    	cout << "Catatan :" << endl;
    	cout << " - Binary Search hanya dapat dijalankan jika data sudah terurut." << endl;
    	cout << " - Proses pencarian dilakukan dengan membagi dua bagian data." << endl;
    	cout << " - MID atau posisi tengah selalu menjadi acuan utama." << endl;
    	cout << " - Jika nilai dicari lebih kecil dari data[MID], maka pencarian pindah ke kiri." << endl;
    	cout << " - Jika nilai dicari lebih besar, pencarian pindah ke kanan." << endl;
    	cout << " - Algoritma berhenti jika nilai ditemukan atau LOW melewati HIGH.\n" << endl << endl;

    cout << "1. Mula-mula, tentukan batas pencarian awal dan akhir:" << endl;
    cout << "   - LOW  = indeks paling awal (biasanya 0)" << endl;
    cout << "   - HIGH = indeks paling akhir (jumlah data - 1)" << endl;
    cout << endl;

    cout << "2. Selama kondisi LOW <= HIGH, lakukan langkah-langkah berikut:" << endl;
    cout << "   a. Tentukan posisi tengah dengan rumus:" << endl;
    cout << "      MID = (LOW + HIGH) / 2" << endl;
    cout << endl;

    cout << "   b. Bandingkan data[MID] dengan nilai yang dicari:" << endl;
    cout << "      - Jika data[MID] == nilai ? data ditemukan." << endl;
    cout << "      - Jika nilai < data[MID]  ? geser pencarian ke kiri," << endl;
    cout << "            yaitu HIGH = MID - 1." << endl;
    cout << "      - Jika nilai > data[MID] ? geser pencarian ke kanan," << endl;
    cout << "            yaitu LOW = MID + 1." << endl;
    cout << endl;

    cout << "3. Jika LOW > HIGH, berarti pencarian berhenti dan data dinyatakan tidak ada." << endl;
    cout << endl;

    cout << "4. Binary Search memiliki kecepatan O(log n), jauh lebih cepat dari Linear Search (O(n))." << endl;
    cout << endl;

    for (int i = 0; i < 100; i++) cout << "=";
    cout << endl;
   
// PROGRAM KECIL (Mini Program)
    cout << "\n=== PROGRAM SEDERHANA: CONTOH BINARY SEARCH ===\n" << endl;

    int data[10] = {5, 7, 12, 15, 17, 19, 22, 25, 27, 32};
    int cari;

    cout << "Data dalam array (terurut): ";
    for (int i = 0; i < 10; i++) cout << data[i] << " ";
    cout << "\n\nMasukkan nilai yang ingin dicari: ";
    cin >> cari;

    int low = 0, high = 9, mid;
    int iter = 0;
    bool ditemukan = false;

    cout << "\nProses Binary Search dimulai...\n" << endl;

    while (low <= high)
    {
        iter++;
        mid = (low + high) / 2;

        cout << "Iterasi ke-" << iter << endl;
        cout << "  LOW  = " << low  << " (data: " << data[low]  << ")" << endl;
        cout << "  HIGH = " << high << " (data: " << data[high] << ")" << endl;
        cout << "  MID  = " << mid  << " (data: " << data[mid]  << ")" << endl;

        if (data[mid] == cari)
        {
            cout << "=> Nilai " << cari << " ditemukan pada indeks ke-" << mid
                 << " setelah " << iter << " iterasi.\n" << endl;
            ditemukan = true;
            break;
        }
        else if (cari < data[mid])
        {
            cout << "=> Nilai lebih kecil dari data[MID], pencarian bergeser ke kiri.\n" << endl;
            high = mid - 1;
        }
        else
        {
            cout << "=> Nilai lebih besar dari data[MID], pencarian bergeser ke kanan.\n" << endl;
            low = mid + 1;
        }
    }

    if (!ditemukan)
    {
        cout << "=> Nilai " << cari << " TIDAK ditemukan dalam array.\n" << endl;
    } cout << "Program Selesai" << endl;
}
