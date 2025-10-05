#include <iostream>
using namespace std;
int main() 
{	cout << "=== PROGRAM MENGHITUNG ALAMAT ARRAY 3 DIMENSI DENGAN INT x[2][3][5] ===\n" << endl;
	for (int i=0; i<75; i++) cout << "="; 
	cout << endl;
	
    cout << "Array: int x[2][3][5]" << endl;
    cout << "Diketahui: -> &x[1][1][4] = 12EF H" << endl;
	cout << "           -> Ukuran int = 4 byte\n" << endl;

    int alamat_x114 = 0x12EF;
    int ukuran_int = 4;

    	int posisi_114 = (1 * 3 * 5) + (1 * 5) + 4;
    		cout << "posisi x[1][1][4] = (1 * 3 * 5) + (1 * 5) + 4" << endl;
    		cout << "                  = 24 H" << endl;
   		int posisi_003 = (0 * 3 * 5) + (0 * 5) + 3;
			cout << "posisi x[0][0][3] = (0 * 3 * 5) + (0 * 5) + 3" << endl;
    		cout << "                  = 3 H\n" << endl;
    		
		int selisih_posisi = posisi_114 - posisi_003;			
    int bytes = selisih_posisi * ukuran_int;
    int alamat_x003 = alamat_x114 - bytes;

    cout << "Rumus: &x[a][b][c] = &x[1][1][4] - (posisi x114 - posisi x003) * ukuran int" << endl;
    cout << "Hasil: &x[0][0][3] = &x[1][1][4] - (24 - 3) * 4" << endl;
    cout << "                   = 12EF H - " << hex << bytes << " H" << endl;
    cout << "                   = " << hex << alamat_x003 << " H" << endl;
}

