#include <iostream>
using namespace std;
int main() 
{	cout << "=== PROGRAM MENENTUKAN GRADE NILAI SISWA ===\n" << endl;
	for (int i=0; i<75; i++) cout << "="; 
	cout << endl;
	
    int skor;
    	cout << "Masukkan nilai siswa: ";
   		cin >> skor;
		cout << endl;
		
    if (skor==100) 
		{cout << "Grade: Skor sempurna!" << endl;} 
	else if (skor>=90) 
		{cout << "Grade: A" << endl;} 
	else if (skor>=80) 
		{cout << "Grade: B" << endl;} 
	else if (skor>=70) 
		{cout << "Grade: C" << endl;}
	else if (skor>=60) 
		{cout << "Grade: D" << endl;} 
	else 
		{cout << "Grade: F" << endl << "Belajar lagi!!!";}
}



