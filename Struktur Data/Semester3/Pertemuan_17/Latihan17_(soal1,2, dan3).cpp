#include <iostream>
using namespace std;

int main()
{	cout << "=== JAWABAN LATIHAN 17 (BUBBLE SORT) ===\n" << endl;
    for (int i = 0; i < 75; i++) cout << "=";
    cout << endl << endl;

    // ================= SOAL 1 =================
    cout << "Soal 1:\n";
    cout << "Apa kompleksitas waktu terbaik Bubble Sort?\n";
    cout << "Jawaban: c. N\n\n";

    cout << "Penjelasan:\n";
    cout << " - Sesuai materi, kompleksitas waktu terbaik Bubble Sort adalah O(n).\n";
    cout << " - Kondisi ini terjadi ketika data sudah terurut menaik.\n";
    cout << " - Pada keadaan tersebut, Bubble Sort hanya melakukan satu kali pengecekan tanpa adanya pertukaran (swap) antar elemen, \n   sehingga waktu eksekusinya menjadi linear.\n\n";


    for (int i = 0; i < 75; i++) cout << "-";
    cout << endl << endl;

    // ================= SOAL 2 =================
    cout << "Soal 2:\n";
    cout << "Kapan kasus terbaik Bubble Sort terjadi?\n";
    cout << "Jawaban: a. Ketika elemen diurutkan dalam urutan menaik\n\n";

   cout << "Penjelasan:\n";
    cout << " - Kasus terbaik Bubble Sort terjadi ketika seluruh elemen dalam array sudah terurut secara menaik.\n";
    cout << " - Pada kondisi ini, algoritma Bubble Sort tidak melakukan pertukaran (swap) karena setiap elemen sudah berada pada posisi yang benar.\n";
    cout << " - Hal ini sesuai dengan materi bahwa Bubble Sort akan berhenti lebih cepat ketika tidak ditemukan kesalahan urutan.\n\n";

    for (int i = 0; i < 75; i++) cout << "-";
    cout << endl << endl;

    // ================= SOAL 3 =================
    cout << "Soal 3:\n";
    cout << "Jumlah swapping untuk menyortir data 8, 22, 7, 9, 31, 5, 13\n";
    cout << "menggunakan Bubble Sort adalah?\n";
    cout << "Jawaban: b. 12\n\n";

     cout << "Penjelasan:\n";
    cout << " - Sesuai materi Bubble Sort, algoritma ini bekerja dengan membandingkan elemen yang bersebelahan dan menukarnya jika urutannya salah.\n";
    cout << " - Proses tersebut dilakukan berulang kali hingga seluruh data tersusun dalam urutan menaik.\n";
    cout << " - Berdasarkan langkah-langkah Bubble Sort pada data tersebut jumlah pertukaran (swap) yang terjadi adalah sebanyak 12 kali.\n\n";

    cout << "Program selesai menampilkan jawaban Latihan 17." << endl;
}
