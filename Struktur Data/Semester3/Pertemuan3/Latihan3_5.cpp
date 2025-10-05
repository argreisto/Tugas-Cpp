#include <iostream>
#include <string>
using namespace std;
struct Buku 
{   string judul, penulis;
    int jumlah;
    bool terbit;
};

int main() 
{   cout << "=== PROGRAM MENGOLAH MENU PENERBITAN BUKU PERPUSTAKAAN ===\n" << endl;
	for (int i=0; i<75; i++) cout << "="; 
	cout << endl;

    Buku b[100];
    int n = 0, pilih;
    string cari;

    do 
	{   cout << endl << "1. Tampilkan Info Buku" << endl;
        cout << "2. Tambah Buku Baru" << endl;
        cout << "3. Tampilkan Buku per Penulis" << endl;
        cout << "4. Hitung Buku per Judul" << endl;
        cout << "5. Hitung Total Buku" << endl;
        cout << "6. Terbitkan Buku" << endl;
        cout << "0. Keluar" << endl;
        cout << endl << "Pilih: "; cin >> pilih;
        cin.ignore();

        switch(pilih)
		{	case 1:
                for (int i=0; i<n; i++)
                    cout << b[i].judul << " | " << b[i].penulis << " | Jumlah: " << b[i].jumlah << " | " << (b[i].terbit ? "Terbit" : "Belum Terbit") << endl;
                break;

            case 2:
                cout << endl << "Judul   : "; getline(cin, b[n].judul);
                cout << "Penulis : "; getline(cin, b[n].penulis);
                cout << "Jumlah  : " ; cin >> b[n].jumlah;
                cout << endl;
                	b[n].terbit = false; n++; cin.ignore();
                break;

            case 3:
                cout << endl << "Masukkan nama penulis: "; getline(cin, cari);
                for (int i=0; i<n; i++)
                    if (b[i].penulis == cari)
                        cout << b[i].judul << endl;
                break;

            case 4:
                cout << endl << "Masukkan judul buku: "; getline(cin, cari);
                for (int i=0; i<n; i++)
                    if (b[i].judul == cari)
                        cout << "Jumlah: " << b[i].jumlah << endl;
                break;

            case 5:
                {   int total = 0;
                    for (int i=0; i<n; i++) total += b[i].jumlah;
                    cout << endl << "Total semua buku: " << total << endl;
                }
                break;

            case 6:
                cout << endl << "Masukkan judul buku yang diterbitkan: "; getline(cin, cari);
                for (int i=0; i<n; i++)
                    if (b[i].judul == cari && b[i].jumlah > 0) 
					{	b[i].jumlah--;
                        b[i].terbit = true;
                        cout << "Buku diterbitkan!" << endl;
                    }
				break;
        }
    } while (pilih != 0);
    cout << endl << "=== Program Selesai ===" << endl; 
}

