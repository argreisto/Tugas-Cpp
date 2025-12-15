#include <iostream>
#include <cstdlib>
using namespace std;

// Struktur node singly linked list
struct Node {
    int data;
    Node* next;
};

// Pointer head
Node* head = NULL;

// Fungsi insert data di awal linked list
void insert(int new_data) {
    Node* new_node = (Node*) malloc(sizeof(Node));
    new_node->data = new_data;
    new_node->next = head;
    head = new_node;
}

// Fungsi menampilkan isi linked list
void display() {
    Node* ptr = head;
    while (ptr != NULL) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}

// Program utama
int main() {
    insert(3);
    insert(1);
    insert(7);
    insert(2);
    insert(9);

    cout << "Linked list adalah: ";
    display();

    return 0;
}
