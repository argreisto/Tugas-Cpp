#include <iostream>
using namespace std;
int main()
{	cout << "=== PROGRAM LENGKAP OPERASI DOUBLE STACK (PUSH1, PUSH2, POP1, POP2)===\n" << endl;
    for (int i=0; i<75; i++) cout << "=";
    cout << endl;

    int S[10];
    int top1 = -1;
    int top2 = 10;
    int pilih, data;

    cout << "Program ini menggunakan dua Stack (Stack1 dan Stack2)" << endl;

    do
    {
        cout << endl;
        cout << "Menu Pilihan :" << endl;
        cout << "1. PUSH1 (Isi Stack1)" << endl;
        cout << "2. POP1  (Hapus Stack1)" << endl;
        cout << "3. PUSH2 (Isi Stack2)" << endl;
        cout << "4. POP2  (Hapus Stack2)" << endl;
        cout << "5. LIHAT ISI STACK" << endl;
        cout << "6. KELUAR" << endl;
        cout << "Pilih menu : ";
        cin >> pilih;

        if (pilih == 1)
        {
            if (top1 + 1 == top2)
            {
                cout << "Stack1 penuh! Tidak bisa menambah data." << endl;
            }
            else
            {
                cout << "Masukkan data ke Stack1 : ";
                cin >> data;
                top1 = top1 + 1;
                S[top1] = data;
                cout << "Data " << data << " masuk ke Stack1." << endl;
            }
        }
        	else if (pilih == 2)
        	{
            	if (top1 == -1)
            	{
              	  	cout << "Stack1 kosong!" << endl;
            	}
            	else
            	{
                	cout << "Data " << S[top1] << " dihapus dari Stack1." << endl;
                	top1 = top1 - 1;
            	}
        	}
        else if (pilih == 3)
        {
            if (top2 - 1 == top1)
            {
                cout << "Stack2 penuh! Tidak bisa menambah data." << endl;
            }
            else
            {
                cout << "Masukkan data ke Stack2 : ";
                cin >> data;
                top2 = top2 - 1;
                S[top2] = data;
                cout << "Data " << data << " masuk ke Stack2." << endl;
            }
        }
        	else if (pilih == 4)
        	{
            	if (top2 == 10)
            	{
                	cout << "Stack2 kosong!" << endl;
            	}
            	else
            	{
                	cout << "Data " << S[top2] << " dihapus dari Stack2." << endl;
                	top2 = top2 + 1;
            	}
        	}
        else if (pilih == 5)
        {
            cout << endl;
            cout << "Isi Stack1 : ";
            if (top1 == -1)
                cout << "(kosong)";
            else
            {
                for (int i = top1; i >= 0; i--)
                    cout << S[i] << " ";
            }
            	cout << endl;
            	cout << "Isi Stack2 : ";
            if (top2 == 10)
                cout << "(kosong)";
            else
            {
                for (int i = top2; i < 10; i++)
                    cout << S[i] << " ";
            }
            cout << endl;
        }
        else if (pilih == 6)
        {
            cout << "Keluar dari program." << endl;
        }
        else
        {
            cout << "Pilihan tidak valid!" << endl;
        }
    } while (pilih != 6);
}
