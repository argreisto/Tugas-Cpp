#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* front = NULL;
Node* rear  = NULL;

// ========================== ENQUEUE ===========================
void enqueue(int nilai) {
    Node* baru = new Node();
    baru->data = nilai;
    baru->next = NULL;

    if (rear == NULL) {
        front = rear = baru;
        cout << "Queue kosong, data " << nilai << " jadi front & rear\n";
    } else {
        cout << "Tambahkan " << nilai << " ke belakang queue\n";
        rear->next = baru;
        rear = baru;
    }
}

// ========================== DEQUEUE ==========================
void dequeue() {
    if (front == NULL) {
        cout << "Queue kosong, tidak bisa dequeue\n";
    } else {
        cout << "Hapus data depan : " << front->data << endl;
        Node* temp = front;
        front = front->next;
        delete temp;

        if (front == NULL)
            rear = NULL;
    }
}

// ========================== TAMPIL QUEUE ==========================
void tampilQueue() {
    Node* bantu = front;
    cout << "Isi Queue : ";
    while (bantu != NULL) {
        cout << bantu->data << " ";
        bantu = bantu->next;
    }
    cout << endl;
}

// ========================== MAIN ==========================
int main() {

    int dataAwal[5] = {21, 45, 37, 40, 52};

    cout << "Data awal yang disediakan:\n";
    for (int i = 0; i < 5; i++) {
        cout << dataAwal[i] << " ";
    }
    cout << "\n\n";

    for (int i = 0; i < 100; i++) cout << "=";
    cout << endl;

    for (int i = 0; i < 75; i++) cout << ".";
    cout << endl;

    cout << "\na.) Proses Enqueue\n";
    for (int i = 0; i < 5; i++) {
        cout << "Iterasi ke-" << i + 1 << endl;
        enqueue(dataAwal[i]);
        tampilQueue();
        cout << endl;
    }

    for (int i = 0; i < 75; i++) cout << ".";
    cout << endl;

    cout << "\nb.) Proses Dequeue\n";
    dequeue();
    tampilQueue();
    cout << endl;

    dequeue();
    tampilQueue();
    cout << endl;

    for (int i = 0; i < 75; i++) cout << ".";
    cout << endl;

    cout << "\nc.) Hasil Akhir Queue\n";
    tampilQueue();

    for (int i = 0; i < 75; i++) cout << ".";
    cout << endl;

    cout << "\nProgram Selesai." << endl;

    return 0;
}
