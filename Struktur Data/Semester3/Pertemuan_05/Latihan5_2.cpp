#include <iostream>
using namespace std;
int main()
{	cout << "=== PROGRAM DASAR OPERASI DOUBLE STACK (PUSH1, POP1, PUSH2, POP2) ===\n" << endl;
    for (int i=0; i<75; i++) cout << "=";
    cout << endl;

    int S[10];
    int top1 = -1;
    int top2 = 10;
    int data;

    cout << "Algoritma Koding Dasar Double Stack\n" << endl;

    cout << " - PUSH1 (Mengisi Stack1)" << endl;
    if (top1 + 1 == top2)
    {
        cout << "Stack1 penuh." << endl;
    }
    else
    {
        cout << "Masukkan data ke Stack1 : ";
        cin >> data;
        top1 = top1 + 1;
        S[top1] = data;
        cout << "Data " << data << " berhasil masuk ke Stack1." << endl;
    }
		cout << endl;
    	cout << " - POP1 (Menghapus isi Stack1)" << endl;
    if (top1 == -1)
    {
        cout << "Stack1 kosong." << endl;
    }
    else
    {
        cout << "Data " << S[top1] << " dihapus dari Stack1." << endl;
        top1 = top1 - 1;
    }
	cout << endl;
    cout << " - PUSH2 (Mengisi Stack2)" << endl;
    	if (top2 - 1 == top1)
    	{
        	cout << "Stack2 penuh." << endl;
    	}
    	else
    	{
        	cout << "Masukkan data ke Stack2 : ";
        	cin >> data;
        	top2 = top2 - 1;
        	S[top2] = data;
        	cout << "Data " << data << " berhasil masuk ke Stack2." << endl;
    	}
		cout << endl;
    	cout << " - POP2 (Menghapus isi Stack2)" << endl;
    if (top2 == 10)
    {
        cout << "Stack2 kosong." << endl;
    }
    else
    {
        cout << "Data " << S[top2] << " dihapus dari Stack2." << endl;
        top2 = top2 + 1;
    }
    cout << endl;
    cout << "Program selesai." << endl;
}
