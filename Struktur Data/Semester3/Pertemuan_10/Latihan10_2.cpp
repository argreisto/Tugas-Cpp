#include <iostream>
using namespace std;
int main()
{	cout << "=== PENJELASAN KONSEP FIFO (FIRST IN FIRST OUT) ===\n" << endl;
    for (int i = 0; i < 75; i++) cout << "=";
    cout << endl;

    cout << "Konsep FIFO adalah prinsip penyimpanan dan pengambilan data\n";
    cout << "di mana data yang pertama kali dimasukkan akan menjadi data\n";
    cout << "yang pertama kali dikeluarkan kembali.\n" << endl;

    cout << "Contohnya seperti antrian di loket atau kasir:\n";
    cout << " - Orang yang datang terlebih dahulu akan dilayani lebih dulu,\n";
    cout << "   sedangkan yang datang belakangan harus menunggu giliran.\n" << endl;

    cout << "Dalam struktur data, prinsip ini digunakan pada QUEUE,\n";
    cout << "di mana proses INSERT (enqueue) menambah data dari belakang (rear),\n";
    cout << "dan proses DELETE (dequeue) menghapus data dari depan (front).\n" << endl;

    cout << "Kesimpulan: FIFO berarti 'First In, First Out',\n";
    cout << "artinya elemen yang pertama masuk akan keluar lebih dulu.\n" << endl;

    cout << "Program selesai menampilkan konsep FIFO." << endl;
}

