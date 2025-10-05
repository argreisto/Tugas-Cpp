#include <iostream>
using namespace std;
struct Buku {
    int nomorAkses;
    string penulis;
    string judul;
    bool diterbitkan;
};

int main() 
{   cout << "=== PROGRAM STRUKTUR MENU PERPUSTAKAAN SEDERHANA ===\n" << endl;
	for (int i=0; i<75; i++) cout << "="; 
	cout << endl;

    Buku b;
    	cout << "Masukkan Nomor Akses Buku : "; cin >> b.nomorAkses; cin.ignore();
    	cout << "Masukkan Nama Penulis     : "; getline (cin, b.penulis);
    	cout << "Masukkan Judul Buku       : "; getline (cin, b.judul);
    	cout << "Apakah Buku Diterbitkan (1=Ya, 0=Tidak)? "; cin >> b.diterbitkan;
		cout << endl;
		
    cout << "=== DATA BUKU ===" << endl;
    cout << "No Akses : " << b.nomorAkses << endl;
    cout << "Penulis  : " << b.penulis << endl;
    cout << "Judul    : " << b.judul << endl;
    cout << "Status   : " << (b.diterbitkan ? "Diterbitkan" : "Belum Terbit") << endl;
}

