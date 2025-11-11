#include <iostream>
using namespace std;
int main()
{	cout << "=== PENJELASAN PENERAPAN APLIKASI STACK DENGAN ARRAY ===\n" << endl;
    for (int i = 0; i < 75; i++) cout << "=";
    cout << endl;

    cout << "Stack adalah struktur data yang menggunakan prinsip LIFO\n";
    cout << "(Last In First Out), di mana elemen terakhir yang masuk\n";
    cout << "akan menjadi elemen pertama yang keluar.\n" << endl;

    cout << "Penerapan stack dengan array dilakukan dengan cara\n";
    cout << "menyimpan data ke dalam elemen-elemen array secara berurutan.\n";
    cout << "Setiap kali dilakukan PUSH, nilai akan disimpan ke indeks berikutnya,\n";
    cout << "dan setiap kali dilakukan POP, nilai dari indeks terakhir akan dihapus.\n" << endl;

    cout << "Contoh prosesnya:\n";
    cout << " - PUSH: menambah data ke posisi paling atas stack.\n";
    cout << " - POP : menghapus data dari posisi paling atas stack.\n";
    cout << " - TOP : menunjukkan elemen teratas pada stack.\n" << endl;

    cout << "Kelebihan stack dengan array adalah prosesnya sederhana dan cepat,\n";
    cout << "karena menggunakan lokasi memori berurutan tanpa pointer.\n" << endl;

    cout << "Kesimpulan: Stack dengan array memanfaatkan indeks array sebagai posisi data,\n";
    cout << "sehingga operasi PUSH dan POP dapat dilakukan dengan mudah dan efisien.\n" << endl;

    cout << "Program selesai menampilkan penerapan aplikasi Stack dengan Array." << endl;
}

