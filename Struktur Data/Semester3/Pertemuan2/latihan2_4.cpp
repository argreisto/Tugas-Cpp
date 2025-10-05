#include <iostream>
using namespace std;
int main() 
{	cout << "=== PROGRAM MENGHITUNG ALAMAT ARRAY 2 DIMENSI DENGAN LONG x[12][14] ===\n" << endl;
	for (int i=0; i<75; i++) cout << "="; 
	cout << endl;
	
    cout << "Array: long x[12][14]" << endl;
    cout << "Diketahui: -> &x[0][0] = 1000 H" << endl;
	cout << "           -> Ukuran long = 8 byte\n" << endl;

    int alamat_x00 = 0x1000;
    int ukuran_long = 8;
    int bytes = ((2 * 14) + 4) * ukuran_long;
    int alamat_x24 = alamat_x00 + bytes;

    cout << "Rumus: &x[a][b] = &x[0][0] + ((a * kolom) + b) * ukuran long" << endl;
    cout << "Hasil: &x[2][4] = &x[0][0] + ((2 * 14) + 4) * 8" << endl;
    cout << "                = 1000 H + " << hex << bytes << " H" << endl;
    cout << "                = " << hex << alamat_x24 << " H" << endl;
}

