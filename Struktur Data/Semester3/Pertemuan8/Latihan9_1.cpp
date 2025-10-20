#include <iostream>
using namespace std;
struct Node
{
    int INFO;
    Node* LINK;
};

int main()
{   cout << "=== PROGRAM ANALISIS POINTER PADA LINEAR SINGLY LINKED LIST ===\n" << endl;
    for (int i = 0; i < 75; i++) cout << "=";
    cout << endl;
		   cout << "Catatan :" << endl;
    	cout << " - Program ini mensimulasikan kondisi pointer seperti pada gambar soal." << endl;
    	cout << " - Terdapat beberapa simpul (node) dengan nilai INFO tertentu." << endl;
    	cout << " - Pointer: P, Q, R, S, dan L menunjuk ke simpul sesuai diagram." << endl;
    	cout << " - Kondisi if akan dicek apakah TRUE atau FALSE.\n" << endl;

    Node n1, n2, n3, n4;
    n1.INFO = 1; n2.INFO = 4; n3.INFO = 5; n4.INFO = 7;
    n1.LINK = &n2; n2.LINK = &n3; n3.LINK = &n4; n4.LINK = NULL;

    Node *P = &n1, *Q = &n2, *R = &n3, *S = &n4;

    cout << "Kondisi pointer dan nilai INFO masing-masing node:\n" << endl;
    cout << "P menunjuk node dengan INFO = " << P->INFO << endl;
    cout << "Q menunjuk node dengan INFO = " << Q->INFO << endl;
    cout << "R menunjuk node dengan INFO = " << R->INFO << endl;
    cout << "S menunjuk node dengan INFO = " << S->INFO << endl << endl;

    cout << "Hasil evaluasi kondisi if:\n" << endl;
    cout << "1. if (P->LINK == R)              -> " << ((P->LINK == R) ? "TRUE" : "FALSE") << endl;
    cout << "2. if (Q->LINK == R->LINK)        -> " << ((Q->LINK == R->LINK) ? "TRUE" : "FALSE") << endl;
    cout << "3. if (Q->LINK->LINK == S->LINK)  -> " << ((Q->LINK->LINK == S->LINK) ? "TRUE" : "FALSE") << endl;
    cout << "4. if (Q == R)                    -> " << ((Q == R) ? "TRUE" : "FALSE") << endl;
    cout << "5. if (Q->LINK == R)              -> " << ((Q->LINK == R) ? "TRUE" : "FALSE") << endl;
    cout << "6. if (R->LINK->INFO == 5)        -> " << ((R->LINK->INFO == 5) ? "TRUE" : "FALSE") << endl;
    cout << "7. if (Q->INFO == 4)              -> " << ((Q->INFO == 4) ? "TRUE" : "FALSE") << endl;

    cout << "\nProgram selesai." << endl;
}
