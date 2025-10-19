#include <iostream>
using namespace std;
int main()
{	cout << "=== PROGRAM CIRI-CIRI KONDISI DOUBLE STACK ===\n" << endl;
    for (int i=0; i<75; i++) cout << "=";
    cout << endl;

    int top1, top2;
    	cout << "Catatan :" << endl;
    	cout << "1. Masukkan nilai top1 dan top2 sesuai kondisi stack." << endl;
    	cout << "2. Nilai awal biasanya :" << endl;
    	cout << "    top1 = -1  artinya Stack1 masih kosong" << endl;
   		cout << "    top2 = 10  artinya Stack2 masih kosong" << endl;
    	cout << "3. Jika Stack1 dan Stack2 bertemu (top1 + 1 = top2), maka stack penuh." << endl;
    	cout << "4. Jika masih ada jarak di antara top1 dan top2, maka Stack masih BISA DIISI." << endl;
    	cout << "5. Jika top1 = -1 dan top2 = 10, maka Stack masih KOSONG (belum ada data sama sekali)." << endl;
    	cout << endl;

    cout << "Masukkan nilai top1 (Stack1) : ";
    cin >> top1;
    cout << "Masukkan nilai top2 (Stack2) : ";
    cin >> top2;

    cout << endl;

    if (top1 + 1 == top2)
    {
        cout << "KONDISI : PENUH" << endl;
        cout << "Ciri-ciri : Baik Stack1 maupun Stack2 sudah penuh dan tidak bisa diisi lagi." << endl;
    }
    	else if (top1 == -1 && top2 == 10)
    	{
        	cout << "KONDISI : KOSONG" << endl;
        	cout << "Ciri-ciri : Baik Stack1 maupun Stack2 tidak memiliki data sama sekali." << endl;
    	}
    else
    {
        cout << "KONDISI : BISA DIISI" << endl;
        cout << "Ciri-ciri : Baik Stack1 maupun Stack2 masih bisa menampung data baru." << endl;
    }
    	cout << endl;
    	cout << "Program selesai." << endl;
}
