#include <iostream>
using namespace std;
int main()
{	cout << "=== PROGRAM SINGLE STACK PUSH/POP MANUAL ===\n" << endl;
    for (int i=0; i<75; i++) cout << "=";
    cout << endl;

    int S[10];
    int top = -1;
    int data;
   	
	cout << "Catatan: " << endl;
	cout << "- Data Stack penuh 10 elemen untuk mengakhiri proses.  " << endl;	
   	cout << "- Masukkan data 999 untuk mengakhiri proses.\n" << endl;

    while (true)
    {
        cout << "Input data : ";
        cin >> data;

        if (data == 999)
        {
            cout << "Input selesai." << endl;
            break;
        }

        if (top < 9)
        {
            top = top + 1;
            S[top] = data;
            cout << "Data " << data << " dimasukkan ke Stack." << endl;
        }
        else
        {
            cout << "Stack penuh!" << endl;
            break;
        }
    }
    	cout << endl;
    	cout << "Mulai proses POP (mengeluarkan isi stack):" << endl;

    while (top >= 0)
    {
        cout << "Data " << S[top] << " dikeluarkan dari Stack." << endl;
        top = top - 1;
    }
    	cout << "Stack sekarang kosong." << endl;
}
