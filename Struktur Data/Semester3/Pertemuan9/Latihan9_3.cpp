#include <iostream>
using namespace std;
struct Node
{
    int INFO;
    Node* LINK;
};

int main()
{   cout << "=== PROGRAM HITUNG DAN TAMPILKAN DATA PADA LINEAR SINGLY LINKED LIST ===\n" << endl;
    for (int i = 0; i < 75; i++) cout << "=";
    cout << endl;
	    cout << "Catatan :" << endl;
    	cout << " - Program ini melanjutkan Linked List dari nomor 2 sebelumnya." << endl;
    	cout << " - FIRST menunjuk ke simpul pertama dan LINK simpul terakhir bernilai NULL." << endl;
    	cout << " - Akan dihitung: jumlah simpul, total nilai INFO, daftar semua INFO," << endl;
    	cout << "   dan jumlah simpul yang INFO-nya = 50.\n" << endl;

    // Membuat node Linked List (contoh data)
    Node n1, n2, n3, n4, n5, n6;

    n1.INFO = 25;
    n2.INFO = 12;
    n3.INFO = 50;
    n4.INFO = 27;
    n5.INFO = 50;
    n6.INFO = 14;

    n1.LINK = &n2;
    n2.LINK = &n3;
    n3.LINK = &n4;
    n4.LINK = &n5;
    n5.LINK = &n6;
    n6.LINK = NULL;

    Node* FIRST = &n1;
    Node* bantu = FIRST;

    int jumlahSimpul = 0;
    int totalINFO = 0;
    int jumlahINFO50 = 0;

    cout << "\nIsi Linked List (INFO): 25 -> 12 -> 50 -> 27 -> 50 -> 14\n" << endl;

    while (bantu != NULL)
    {
        jumlahSimpul++;
        totalINFO += bantu->INFO;
        if (bantu->INFO == 50)
            jumlahINFO50++;
        bantu = bantu->LINK;
    }

    cout << "\n...Proses Menghitung data dimulai...\n" << endl;

    // A
    cout << "A. Menghitung jumlah simpul dalam Linked List" << endl;
    cout << "   = Menghitung banyak node yang dilewati dari FIRST sampai NULL" << endl;
    cout << "   = " << jumlahSimpul << " simpul" << endl << endl;

    // B
    cout << "B. Menghitung total semua nilai INFO" << endl;
    cout << "   = Menjumlahkan seluruh nilai INFO dari tiap simpul" << endl;
    cout << "   = 25 + 12 + 50 + 27 + 50 + 14" << endl;
    cout << "   = " << totalINFO << endl << endl;

    // C
    cout << "C. Menampilkan semua nilai INFO dalam Linked List" << endl;
    cout << "   = Menelusuri semua simpul dan mencetak nilai INFO satu per satu" << endl;
    cout << "   = 25 -> 12 -> 50 -> 27 -> 50 -> 14" << endl << endl;

    // D
    cout << "D. Menghitung jumlah simpul dengan nilai INFO = 50" << endl;
    cout << "   = Menghitung berapa simpul yang memiliki nilai INFO = 50" << endl;
    cout << "   = " << jumlahINFO50 << " simpul" << endl;

    	cout << "\nProgram selesai." << endl;
}
