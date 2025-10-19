#include <iostream>
using namespace std;
int main()
{	cout << "=== PROGRAM CIRI-CIRI KONDISI SINGLE STACK ===\n"<< endl;
    for (int i=0; i<75; i++) cout << "=";
    cout << endl;

    int S[10];
    int top;
    	cout << "Masukkan nilai top (nilainya -1 sampai 9): "; cin >> top; cout << endl;

    if (top == -1)
    {
        cout << "Kondisi Stack : KOSONG" << endl;
        cout << "Ciri-ciri     : Tidak ada data di dalam Stack." << endl;
    }
    else if (top == 9)
    {
        cout << "Kondisi Stack : PENUH" << endl;
        cout << "Ciri-ciri     : Stack sudah berisi 10 data dan tidak bisa diisi lagi." << endl;
    }
    else if (top >= 0 && top < 9)
    {
        cout << "Kondisi Stack : BISA DIISI" << endl;
        cout << "Ciri-ciri     : Stack belum penuh dan masih bisa ditambah data baru." << endl;
			cout << "\nKondisi Tambahan : ADA ISINYA" << endl;
        	cout << "Ciri-ciri        : Stack sudah berisi beberapa data, tapi belum mencapai batas maksimum." << endl;
    }
    else
    {
        cout << "Nilai top tidak valid." << endl;
    }
		cout << "\nProgram selesai." << endl;
}
