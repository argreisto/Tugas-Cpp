#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* kiri;
    Node* kanan;
};

Node* buatNode(int nilai) {
    Node* baru = new Node();
    baru->data = nilai;
    baru->kiri = NULL;
    baru->kanan = NULL;
    return baru;
}

// ======================================== INSERT DATA ========================================
Node* insertNode(Node* root, int nilai) {
    if (root == NULL)
        return buatNode(nilai);

    if (nilai < root->data)
        root->kiri = insertNode(root->kiri, nilai);
    else
        root->kanan = insertNode(root->kanan, nilai);

    return root;
}

// ======================================== INORDER ========================================
void inorder(Node* root) {
    if (root != NULL) {
        inorder(root->kiri);
        cout << root->data << " ";
        inorder(root->kanan);
    }
}

// ======================================== PREORDER ========================================
void preorder(Node* root) {
    if (root != NULL) {
        cout << root->data << " ";
        preorder(root->kiri);
        preorder(root->kanan);
    }
}

// ======================================== POSTORDER ========================================
void postorder(Node* root) {
    if (root != NULL) {
        postorder(root->kiri);
        postorder(root->kanan);
        cout << root->data << " ";
    }
}

// ======================================== MAIN ========================================
int main() {
    Node* root = NULL;

    int data[20] = {50, 30, 70, 20, 40, 60, 80, 10, 25, 35,
                    45, 55, 65, 75, 85, 5, 15, 27, 33, 90};

    cout << "Data awal (20 data):\n";
    for (int i = 0; i < 20; i++) {
        cout << data[i] << " ";
        root = insertNode(root, data[i]);
    }
    cout << "\n\n";
 	
	for (int i = 0; i < 100; i++) cout << "=";
    cout << endl;
    
    for (int i = 0; i < 75; i++) cout << ".";
    cout << endl;
    cout << "\na.) Inorder (kiri - akar - kanan)\n";
    cout << "    Hasil : ";
	inorder(root);
    cout << "\n--> Akar utama = " << root->data << " (posisi di tengah)\n\n";
	for (int i = 0; i < 75; i++) cout << ".";
    cout << endl;
    
    cout << "\nb.) Preorder (akar - kiri - kanan)\n";
	cout << "    Hasil : ";
    preorder(root);
    cout << "\n--> Akar utama = " << root->data << " (posisi di awal)\n\n";
	for (int i = 0; i < 75; i++) cout << ".";
    cout << endl;
    
    cout << "\nc.) Postorder (kiri - kanan - akar)\n";
    cout << "    Hasil : ";
	postorder(root);
    cout << "\n- Akar utama = " << root->data << " (posisi di akhir)\n";
    for (int i = 0; i < 75; i++) cout << ".";
    cout << endl;
    
    cout << "\nProgram Selesai." << endl;
    
    return 0;
}
