#include <iostream>
using namespace std;
int main()
{	cout << "=== PENJELASAN KONSEP LIFO (LAST IN FIRST OUT) ===\n" << endl;
    for (int i = 0; i < 75; i++) cout << "=";
    cout << endl;

    cout << "Konsep LIFO adalah prinsip penyimpanan dan pengambilan data\n";
    cout << "di mana data yang terakhir dimasukkan akan menjadi data pertama\n";
    cout << "yang dikeluarkan kembali.\n" << endl;

    cout << "Contohnya seperti tumpukan piring:\n";
    cout << " - Piring yang terakhir diletakkan di atas tumpukan,\n";
    cout << "   akan menjadi piring pertama yang diambil saat dibutuhkan.\n" << endl;

    cout << "Dalam struktur data, prinsip ini digunakan pada STACK,\n";
    cout << "di mana proses PUSH menambah data dari atas,\n";
    cout << "dan proses POP menghapus data dari atas juga.\n" << endl;

    cout << "Kesimpulan: LIFO berarti 'Last In, First Out',\n";
    cout << "artinya elemen terakhir yang masuk akan keluar lebih dulu.\n" << endl;

    cout << "Program selesai menampilkan konsep LIFO." << endl;
}

