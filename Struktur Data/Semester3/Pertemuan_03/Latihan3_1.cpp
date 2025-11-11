#include <iostream>
using namespace std;
struct Mahasiswa 
{	int no;
    string nama;
   	int usia;
    float nilai;
};

int main() 
{   cout << "=== PROGRAM MENYIMPAN DAN MENCETAK DATA DENGAN STRUKTUR ===\n" << endl;
	for (int i=0; i<75; i++) cout << "="; 
	cout << endl;

    Mahasiswa mhs;
    	cout << "Masukkan No Urut  : "; cin >> mhs.no;
    	cout << "Masukkan Nama     : "; cin >> mhs.nama;
    	cout << "Masukkan Usia     : "; cin >> mhs.usia;
    	cout << "Masukkan Nilai    : "; cin >> mhs.nilai;
		cout << endl;
	
    cout << "=== DATA MAHASISWA ===" << endl;
    cout << "No Urut : " << mhs.no << endl;
    cout << "Nama    : " << mhs.nama << endl;
    cout << "Usia    : " << mhs.usia << endl;
    cout << "Nilai   : " << mhs.nilai << endl;
}

