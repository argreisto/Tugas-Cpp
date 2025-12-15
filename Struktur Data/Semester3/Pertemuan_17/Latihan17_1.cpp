#include <iostream>
using namespace std;

int main()
{	cout << "=== JAWABAN SOAL 1 LATIHAN 17 (BUBBLE SORT) ===\n" << endl;
    for (int i = 0; i < 75; i++) cout << "=";
    cout << endl << endl;

    cout << "Soal 1:\n";
    cout << "Apa kompleksitas waktu terbaik Bubble Sort?\n";
    cout << "Jawaban: c. N\n\n";

    cout << "Penjelasan:\n";
    cout << " - Sesuai materi, kompleksitas waktu terbaik Bubble Sort adalah O(n).\n";
    cout << " - Kondisi ini terjadi ketika data sudah terurut menaik.\n";
    cout << " - Pada keadaan tersebut, Bubble Sort hanya melakukan satu kali pengecekan tanpa adanya pertukaran (swap) antar elemen, \n   sehingga waktu eksekusinya menjadi linear.\n\n";

    cout << "Program selesai menampilkan jawaban soal 1." << endl;
}
