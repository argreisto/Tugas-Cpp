#include <iostream>
using namespace std;
int main() 
{	cout << "== PROGRAM MENUKAR BILANGAN A DENGAN B DAN SEBALIKNYA ==\n" << endl;
	for (int i=0; i<75; i++) cout << "="; 
	cout << endl;
	
    float A, B;
    	cout << "Masukkan bilangan A: ";
    	cin >> A;
    	cout << "Masukkan bilangan B: ";
    	cin >> B;

    swap (A, B);
    	cout << "\nSetelah ditukar:" << endl;
    	cout << "A = " << A << endl;
    	cout << "B = " << B << endl;
}


