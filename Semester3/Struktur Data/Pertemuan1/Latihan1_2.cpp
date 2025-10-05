#include <iostream>
using namespace std;
int main() 
{	cout << "== PROGRAM MENGHITUNG LUAS DAN KELILING PERSEGI PANJANG ==\n" << endl;
	for (int i=0; i<75; i++) cout << "="; 
	cout << endl;
	
    int panjang, lebar;
    	cout <<"Masukkan panjang : ";
    	cin >>panjang;
    	cout <<"Masukkan lebar : ";
    	cin >> lebar;
		cout << endl;

    int luas = panjang*lebar;
		cout << "Luas = panjang x lebar" << endl;
		cout << "     = " << panjang << " x " << lebar << endl;
		cout << "     = " << luas << endl << endl;
		
	int keliling = (panjang+lebar)*2;
    	cout << "Keliling = (panjang+lebar) x 2"<<endl;
		cout << "         = " << "(" << panjang << " + " << lebar << ") x 2" << endl;
		cout << "         = " << keliling << endl;
}


