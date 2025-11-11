#include <iostream>
using namespace std;
int main()
{	cout << "=== PROGRAM SINGLE STACK MENEGLUARKAN POP ISI STACK ===\n" << endl;
    for (int i=0; i<75; i++) cout << "=";
    cout << endl;

    int S[10];
    int top = -1;
    int data;
    	cout << "Masukkan data ke Stack (akan berhenti bila Stack penuh)" << endl;

    while (true)
    {
        if (top == 9)
        {
            cout << "Stack sudah penuh, sekarang akan dikeluarkan satu per satu." << endl;
            break;
        }
		cout << "Input data : "; cin >> data;

        top = top + 1;
        S[top] = data;
        cout << "Data " << data << " dimasukkan ke Stack." << endl;
    }
    	cout << endl; cout << "Proses mengeluarkan (POP) isi Stack:" << endl;

    while (top >= 0)
    {
        cout << "Data " << S[top] << " dikeluarkan dari Stack." << endl;
        top = top - 1;
    }
		cout << "Stack sekarang kosong." << endl;
}
