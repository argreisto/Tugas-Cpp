#include <iostream>
using namespace std;

// ======================================== BINARY SEARCH ========================================
int binarySearch(int arr[], int n, int cari) {
    int kiri = 0;
    int kanan = n - 1;
    int langkah = 0;

    while (kiri <= kanan) {
        langkah++;
        int tengah = (kiri + kanan) / 2;

        cout << "Langkah ke-" << langkah << endl;
        cout << "  Bandingkan dengan data tengah : " << arr[tengah] << endl;

        if (arr[tengah] == cari) {
            cout << "  -> Data ditemukan\n";
            return langkah;
        }
        else if (arr[tengah] < cari) {
            cout << "  -> Cari ke kanan\n";
            kiri = tengah + 1;
        }
        else {
            cout << "  -> Cari ke kiri\n";
            kanan = tengah - 1;
        }
        cout << endl;
    }

    cout << "Data tidak ditemukan.\n";
    return langkah;
}

// ======================================== MAIN ========================================
int main() 
{   int data[15] = {3, 6, 9, 12, 15, 18, 21, 24, 27, 30, 33, 36, 39, 42, 45};
    int n = 15;

    cout << "Data awal (15 data):\n";
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }
    cout << "\n\n";

    for (int i = 0; i < 100; i++) cout << "=";
    cout << endl;

    int cari;
    cout << "\n = = = Proses Binary Search = = =\n";
    cout << " Masukkan angka yang mau dicari di Data awal : ";
    cin >> cari;
    cout << endl;

    int totalLangkah = binarySearch(data, n, cari);

    for (int i = 0; i < 75; i++) cout << ".";
    cout << endl;

    cout << "\n= = = Hasil Pencarian = = =\n";
    cout << " Total langkah pencarian : " << totalLangkah << endl;

    for (int i = 0; i < 75; i++) cout << ".";
    cout << endl;

    cout << "\nProgram Selesai." << endl;

    return 0;
}

