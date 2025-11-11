#include <iostream>
using namespace std;

struct Node {
    int INFO;
    Node* LEFT;
    Node* RIGHT;
};

int main()
{	cout << "=== PROGRAM ANALISIS POINTER PADA LINEAR DOUBLE LINKED LIST ===\n" << endl;
    for (int i = 0; i < 75; i++) cout << "=";
    cout << endl;
		cout << "Catatan :" << endl;
    	cout << " - Program ini mensimulasikan kondisi pointer seperti gambar soal Latihan 12." << endl;
    	cout << " - Struktur data menggunakan Double Linked List (dua arah)." << endl;
    	cout << " - Setiap simpul memiliki pointer LEFT dan RIGHT yang saling terhubung." << endl;
    	cout << " - Akan disebutkan nama-nama pointer sesuai nomor, dan pointer yang nilainya sama.\n" << endl;

    // Membuat 3 simpul (node)
    Node n1, n2, n3;

    n1.INFO = 1;
    n2.INFO = 2;
    n3.INFO = 3;

    // Menghubungkan node seperti pada gambar di PDF
    n1.LEFT = NULL;
    n1.RIGHT = &n2;
    n2.LEFT = &n1;
    n2.RIGHT = &n3;
    n3.LEFT = &n2;
    n3.RIGHT = NULL;

    // Pointer sesuai gambar
    Node* FIRST = &n1;
    Node* LAST = &n3;

    cout << "Kondisi Linked List:\n" << endl;
    cout << " [n1] <-> [n2] <-> [n3]\n" << endl;
    cout << "Pointer utama: FIRST menunjuk ke n1, LAST menunjuk ke n3.\n" << endl;

    cout << "A. Nama-nama pointer sesuai dengan nomornya:\n" << endl;
    cout << " (1)  FIRST    -> Menunjuk ke node pertama (n1)" << endl;
    cout << " (2)  LEFT n1  -> NULL" << endl;
    cout << " (3)  RIGHT n1 -> n2" << endl;
    cout << " (4)  LEFT n2  -> n1" << endl;
    cout << " (5)  RIGHT n2 -> n3" << endl;
    cout << " (6)  LEFT n3  -> n2" << endl;
    cout << " (7)  RIGHT n3 -> NULL" << endl;
    cout << " (8)  LAST     -> Menunjuk ke node terakhir (n3)\n" << endl;

    cout << "B. Pointer yang nilainya sama:\n" << endl;
    cout << " - RIGHT n1 (3) = LEFT n2 (4)" << endl;
    cout << " - RIGHT n2 (5) = LEFT n3 (6)" << endl;
    cout << " - LEFT n1 (2)  dan RIGHT n3 (7) sama-sama bernilai NULL" << endl;
    cout << " - FIRST (1) menunjuk ke node yang sama dengan LEFT n2 (4) -> RIGHT n1 (3) jalurnya." << endl;
    cout << " - LAST (8) sama dengan RIGHT n2 (5) -> RIGHT n3 (7) jalurnya.\n" << endl;

    cout << "Kesimpulan:" << endl;
    cout << " - Double Linked List dapat dilalui dari kiri ke kanan (FIRST ke LAST)" << endl;
    cout << "   maupun dari kanan ke kiri (LAST ke FIRST) dengan pointer LEFT dan RIGHT." << endl;
    cout << " - Pointer yang saling berpasangan memiliki alamat sama karena saling menunjuk antar node.\n" << endl;

    cout << "Program selesai." << endl;
}
