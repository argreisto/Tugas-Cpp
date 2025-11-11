#include <iostream>
using namespace std;
int main()
{	cout << "=== PROGRAM SINGLE STACK PUSH/POP SESUAI NILAI ===\n" << endl;
    for (int i=0; i<75; i++) cout << "=";
    cout << endl;

    int stack[10];
    int top = -1;
    int data;

    cout << "Catatan: " << endl;
	cout << "- Masukkan data 999 untuk mengakhiri proses." << endl;
    cout << "- Data >= 60 akan di-PUSH ke Stack." << endl;
    cout << "- Data < 60 akan menyebabkan POP dari Stack.\n" << endl;
		
    do {
        cout << "Input data : ";
        cin >> data;

        if (data == 999) {
            cout << "Proses selesai..." << endl;
            break;
        }

        if (data >= 60) {
            if (top < 9) {
                top++;
                stack[top] = data;
                cout << "Data " << data << " masuk ke stack." << endl;
            } else {
                cout << "Stack penuh!!" << endl;
                break;
            }
        } else {
            if (top > -1) {
                cout << "Data " << stack[top] << " keluar dari stack." << endl;
                top--;
            } else {
                cout << "Stack kosong!!" << endl;
                break;
            }
        }
    } while (true);

    cout << endl << "Isi Stack Sekarang : ";
    if (top == -1) cout << "kosong" << endl;
    else {
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }  
}


