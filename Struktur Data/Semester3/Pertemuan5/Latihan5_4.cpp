#include <iostream>
using namespace std;
int main()
{
    cout << "=== PROGRAM AMBIL POP DAN TAMPILKAN ISI STACK1 SAMPAI KOSONG ===\n" << endl;
    for (int i=0; i<75; i++) cout << "=";
    cout << endl;

    int Stack1[10];
    int top1;
    int n;
    	cout << "Masukkan banyak data yang akan dimasukkan ke Stack1 (maks 10) : ";
    	cin >> n;

    top1 = -1;

    cout << endl;
    cout << "Masukkan data ke Stack1 :" << endl;
    for (int i = 0; i < n; i++)
    {
        int data;
        cout << "Data ke-" << i + 1 << " : ";
        cin >> data;
        top1 = top1 + 1;
        Stack1[top1] = data;
    }
    	cout << endl;
    	cout << "Isi Stack1 akan diambil satu per satu (POP) sampai kosong:" << endl;

    while (top1 >= 0)
    {
        cout << "Data " << Stack1[top1] << " diambil dari Stack1." << endl;
        top1 = top1 - 1;
    }
		cout << "Stack1 sekarang kosong." << endl;
}
