#include <iostream>
using namespace std;
int main()
{	cout << "=== PROGRAM SINGLE STACK PUSH HINGGA OVERFLOW ===\n" << endl;
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
            cout << "Stack sudah penuh, tidak bisa menambah data lagi." << endl;
            break;
        }
			cout << "Input data : ";
        	cin >> data;

        top = top + 1;
        S[top] = data;
        cout << "Data " << data << " dimasukkan ke Stack." << endl;
    }
		cout << endl;
    	cout << "Isi Stack (atas ke bawah): ";
    for (int i = top; i >= 0; i--)
    {
        cout << S[i] << " ";
    }
    	cout << endl;
}
