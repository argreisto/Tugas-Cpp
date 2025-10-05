#include <iostream>
using namespace std;
int main() 
{	cout << "== PROGRAM MENENTUKAN JARAK ANTAR KOORDINAT ==\n" << endl;
	for (int i=0; i<75; i++) cout << "="; 
	cout << endl;
	
    float x1, y1, x2, y2;
    	cout << "Masukkan koordinat titik A (x y): ";
    	cin >> x1 >> y1;
    	cout << "Masukkan koordinat titik B (x y): ";
    	cin >> x2 >> y2;

    float dx = x2-x1;
    float dy = y2-y1;

    float jaraknya = dx*dx + dy*dy;
    	cout << "\nJarak kuadrat antara A dan B = " << jaraknya << endl;
}

