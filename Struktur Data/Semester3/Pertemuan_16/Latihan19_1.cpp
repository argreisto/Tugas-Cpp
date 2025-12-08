#include <iostream>
using namespace std;

// Struktur node
struct Node {
    char data;
    Node *left, *right;
};

// Membuat node baru
Node* baru(char data) {
    Node* n = new Node();
    n->data = data;
    n->left = n->right = NULL;
    return n;
}

// Traversal PreOrder
void preOrder(Node* root) {
    if (root == NULL) return;
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

// Traversal InOrder
void inOrder(Node* root) {
    if (root == NULL) return;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

// Traversal PostOrder
void postOrder(Node* root) {
    if (root == NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

int main() 
{   cout << "Nama  : ARGREISTO DANIEL KRISMIAWAN\n";
    cout << "NIM   : 241011400910\n";
    cout << "Kelas : 03TPLP023\n" << endl;

    cout << "=== PROGRAM TRAVERSAL POHON MENGGUNAKAN PRE-ORDER, IN-ORDER DAN POSTORDER ===\n\n";
    for (int i = 0; i < 60; i++) cout << "=";
    cout << "\n" << endl;

    // Membuat node
    Node *R = baru('R');
    Node *A = baru('A');
    Node *S = baru('S');
    Node *I = baru('I');
    Node *T = baru('T');
    Node *E = baru('E');

    // Menghubungkan node sesuai pohon yang benar:
    //            R
    //          /  \
    //         A    E
    //       /
    //      S
    //    /  \
    //   I    T
    R->left = A;
    R->right = E;

    A->left = S;
    A->right = NULL;   // A->right kosong

    S->left = I;
    S->right = T;

    // Hasil
    cout << "PreOrder  : ";
    preOrder(R);

    cout << "\nInOrder   : ";
    inOrder(R);

    cout << "\nPostOrder : ";
    postOrder(R);

    cout << "\n";
    return 0;
}
