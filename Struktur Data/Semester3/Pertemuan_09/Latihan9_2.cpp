#include <iostream>
using namespace std;
struct Node
{
    int INFO;
    Node* LINK;
};

int main()
{   cout << "=== PROGRAM PENEMPATAN POINTER Q PADA LINEAR SINGLY LINKED LIST ===\n" << endl;
    for (int i = 0; i < 75; i++) cout << "=";
    cout << endl;
	    cout << "Catatan :" << endl;
	    cout << " - Program ini mensimulasikan posisi pointer Q pada beberapa simpul Linked List." << endl;
    	cout << " - FIRST menunjuk ke simpul pertama, dan LAST menunjuk ke simpul terakhir." << endl;
    	cout << " - LINK dari simpul terakhir bernilai NULL.\n" << endl;

    Node n1, n2, n3, n4, n5, n6;
    n1.INFO = 1; n2.INFO = 4; n3.INFO = 5; n4.INFO = 7; n5.INFO = 50; n6.INFO = 9;
    n1.LINK = &n2; n2.LINK = &n3; n3.LINK = &n4; n4.LINK = &n5; n5.LINK = &n6; n6.LINK = NULL;

    Node* FIRST = &n1;
    Node* LAST = &n6;
    Node* Q = NULL;
	    cout << "Isi Linked List (INFO): 1 -> 4 -> 5 -> 7 -> 50 -> 9\n" << endl;

    Q = FIRST;
    cout << "a. Q menunjuk simpul no (1)            -> Q->INFO = " << Q->INFO << endl;

    Q = &n4;
    cout << "b. Q menunjuk simpul no (7)            -> Q->INFO = " << Q->INFO << endl;

    Q = LAST;
    cout << "c. Q menunjuk simpul terakhir          -> Q->INFO = " << Q->INFO << endl;

    Q = FIRST;
    while (Q != NULL && Q->INFO != 50)
        Q = Q->LINK;
    if (Q != NULL)
        cout << "d. Q menunjuk simpul dengan INFO=50    -> Q->INFO = " << Q->INFO << endl;
    else
        cout << "d. Tidak ditemukan simpul dengan INFO=50" << endl;

    Q = FIRST;
    while (Q->LINK != NULL && Q->LINK->INFO != 50)
        Q = Q->LINK;
    if (Q != NULL && Q->LINK != NULL)
        cout << "e. Q menunjuk simpul sebelum INFO=50   -> Q->INFO = " << Q->INFO << endl;
    else
        cout << "e. Tidak ditemukan simpul sebelum INFO=50" << endl;

    cout << "\nProgram selesai." << endl;
}
