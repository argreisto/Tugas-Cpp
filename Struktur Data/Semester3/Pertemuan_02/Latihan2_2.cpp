#include <iostream>
using namespace std;
int main() 
{	cout << "=== PROGRAM MENCETAK ALAMAT ELEMEN ARRAY 1 DIMENSI DENGAN INT x[15] ===\n" << endl;
	for (int i=0; i<75; i++) cout << "="; 
	cout << endl;
	
    cout << "Array: int x[15]" << endl;
    cout << "Diketahui: -> &x[3] = 1000 H" << endl;
	cout << "           -> Ukuran int = 4 byte\n" << endl;

    int alamat_x3 = 0x1000;
    int ukuran_int = 4;
    int bytes = (9-3) * ukuran_int;
    int alamat_x9 = alamat_x3 + bytes;

    cout << "Rumus: &x[a] = &x[3] + ((a - 3) * ukuran int)" << endl;
    cout << "Hasil: &x[9] = &x[3] + ((9 - 3) * 4)" << endl;
    cout << "             = 1000 H + " << hex << bytes << " H" << endl;
    cout << "             = " << hex << alamat_x9 << " H" << endl;
}

