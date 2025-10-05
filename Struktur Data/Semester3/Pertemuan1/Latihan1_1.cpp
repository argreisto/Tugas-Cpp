#include <iostream>
using namespace std;
int main() 
{	cout << "=== PROGRAM MENCETAK 3 TIPE DATA BERBEDA ===\n" << endl;
	for (int i=0; i<75; i++) cout << "="; 
	cout << endl;
    
	int angka;
    char huruf;
    float pecahan;
   		cout << "Masukkan 3 nilai (integer, karakter, float)\n " << endl;
		cout << "Input berurutan: ";
    	cin >> angka >> huruf >> pecahan;
    	
    cout << "\nInteger : " <<angka<<endl;
   	cout << "Karakter : " <<huruf<<endl;
   	cout << "Pecahan : " <<pecahan<<endl;
}


