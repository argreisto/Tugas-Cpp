#include <iostream>
using namespace std;
struct Mahasiswa 
{   int no;
    string nama;
    int umur;
};

int main() 
{   cout << "=== PROGRAM MENYIMPAN DAN MENCETAK DATA KE-DUA DENGAN STRUKTUR ===\n" << endl;
	for (int i=0; i<75; i++) cout << "="; 
	cout << endl;

    Mahasiswa mhs[5];
		for (int i=0; i<5; i++) 
		{	mhs[i].no = i + 1;
        		cout << "Masukkan Nama Mahasiswa ke-" << i+1 << " : "; cin >> mhs[i].nama;
        		cout << "Masukkan Umur : "; cin >> mhs[i].umur;
        	cout << endl;
    	}

    cout << "=== DETAIL MAHASISWA NOMOR 2 ===\n";
    cout << "No Urut : " << mhs[1].no << endl;
    cout << "Nama    : " << mhs[1].nama << endl;
    cout << "Umur    : " << mhs[1].umur << endl;
}

