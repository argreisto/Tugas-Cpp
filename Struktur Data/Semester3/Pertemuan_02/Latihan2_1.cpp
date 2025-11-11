#include <iostream>
using namespace std;
int main() 
{	cout << "=== PROGRAM MENCETAK ALAMAT ELEMEN ARRAY 1 DEMENSI DENGAN CHAR x[12] ===\n" << endl;
	for (int i=0; i<75; i++) cout << "="; 
	cout << endl;
	
    cout << "Array: char x[12]" << endl;
    cout << "Diketahui: -> &x[0] = 1000 H" << endl;
	cout << "           -> Ukuran char = 1 byte\n" << endl;

    int alamat_x0 = 0x1000;
    int ukuran_char = 1;
    int bytes = (8*ukuran_char);
    int alamat_x8 = alamat_x0 + bytes;

    cout << "Rumus: &x[a] = &x[0] + (a * ukuran char)" << endl;
    cout << "Hasil: &x[8] = &x[0] + (8 * 1)" << endl;
    cout << "             = 1000 H + " << hex << bytes << " H" << endl;
    cout << "             = " << hex << alamat_x8 << " H" << endl;
}
