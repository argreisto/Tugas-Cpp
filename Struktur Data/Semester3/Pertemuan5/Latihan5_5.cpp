#include <iostream>
using namespace std;
int main()
{
    cout << "=== PROGRAM AMBIL POP DAN TAMPILKAN ISI STACK2 SAMPAI KOSONG ===\n" << endl;
    for (int i = 0; i < 75; i++) cout << "=";
    cout << endl;

    int Stack2[10];
    int top2;
    int n;
    	cout << "Masukkan banyak data yang akan dimasukkan ke Stack2 (maks 10) : ";
    	cin >> n;

    top2 = 10;

    cout << endl;
    cout << "Masukkan data ke Stack2 :" << endl;
    for (int i = 0; i < n; i++)
    {
        int data;
        cout << "Data ke-" << i + 1 << " : ";
        cin >> data;
        top2 = top2 - 1;
        Stack2[top2] = data;
    }
    	cout << endl;
    	cout << "Isi Stack2 akan diambil satu per satu (POP) sampai kosong:" << endl;

    while (top2 < 10)
    {
        cout << "Data " << Stack2[top2] << " diambil dari Stack2." << endl;
        top2 = top2 + 1;
    }
    	cout << "Stack2 sekarang kosong." << endl;
}
