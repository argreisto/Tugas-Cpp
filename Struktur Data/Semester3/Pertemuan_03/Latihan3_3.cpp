#include <iostream>
using namespace std;
struct Mahasiswa 
{   int no;
    string nama;
    int umur;
    string alamat;
    float nilai;
};

int main() 
{   cout << "=== PROGRAM MENYIMPAN DAN MENCETAK 15 DATA DENGAN STRUKTUR ===\n" << endl;
	for (int i=0; i<75; i++) cout << "="; 
	cout << endl;

    Mahasiswa mhs[15];
    for (int i=0; i<15; i++) 
	{	mhs[i].no = i+1;
        	cout << "Mahasiswa ke-" << mhs[i].no << endl;
        	cout << "Nama   : "; cin >> mhs[i].nama;
        	cout << "Umur   : "; cin >> mhs[i].umur;
        	cout << "Alamat : "; cin >> mhs[i].alamat;
        	cout << "Nilai  : "; cin >> mhs[i].nilai;
        	cout << endl;
    }

    cout << "=== DATA 15 MAHASISWA ===\n";
    for (int i=0; i<15; i++) 
	{	cout << mhs[i].no << ". " << mhs[i].nama << " | " << mhs[i].umur << " tahun | " << mhs[i].alamat << " | Nilai: " << mhs[i].nilai << endl;
    }
}

