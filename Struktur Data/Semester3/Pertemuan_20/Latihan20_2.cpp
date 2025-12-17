#include <iostream> 
using namespace std;

struct Node
{ 	int data; 
	Node* next; 
};
	
Node* head = NULL;

// ======================================== INSERT ========================================
void insertNode(int nilai) 
{ 	Node* baru = new Node(); 
	baru->data = nilai;

	if (head == NULL) 
	{   head = baru;
    	baru->next = head;
    	cout << "Data " << nilai << " berhasil ditambahkan sebagai node pertama.\n";
	} 
	
	else 
	{	Node* temp = head;
    	while (temp->next != head) 
		{	temp = temp->next;
    	}
    	temp->next = baru;
    	baru->next = head;
   	 	cout << "Data " << nilai << " berhasil ditambahkan.\n";
	}
}

// ======================================== DELETE ========================================
void deleteNode(int nilai) 
{	if (head == NULL) 
	{ 	cout << "List kosong. Tidak ada data yang dihapus.\n"; return; 
	}

	Node *curr = head, *prev = NULL;

do 
{	if (curr->data == nilai) 
	{	if (prev != NULL) 
		{	prev->next = curr->next;
        } 
		else 
		{	Node* last = head;
            while (last->next != head)
                last = last->next;
            head = curr->next;
            last->next = head;
        }
        cout << "Data " << nilai << " berhasil dihapus.\n";
        delete curr;
        return;
    }
    prev = curr;
    curr = curr->next;
} while (curr != head);

cout << "Data tidak ditemukan.\n";

}

// ======================================== TRAVERSE ========================================
void traverse() 
{ 	if (head == NULL) 
	{ cout << "List kosong.\n"; return; 
	}

	Node* temp = head;
	cout << "Isi Circular Linked List : ";
	
do 
{	cout << temp->data << " -> ";
   	temp = temp->next;
} while (temp != head);

cout << "(kembali ke head)\n";

}

// ======================================== MAIN ========================================
int main() 
{	int pilihan, nilai;

do 
{   cout << "\n================ MENU =================\n";
    cout << "1. Insert Data\n";
    cout << "2. Delete Data\n";
    cout << "3. Traverse Data\n";
    cout << "4. Keluar\n";
    cout << "Pilih menu : ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            cout << "Masukkan data : ";
            cin >> nilai;
            insertNode(nilai);
            break;
        case 2:
            cout << "Masukkan data yang akan dihapus : ";
            cin >> nilai;
            deleteNode(nilai);
            break;
        case 3:
            traverse();
            break;
        case 4:
            cout << "\nProgram selesai.\n";
            break;
        default:
            cout << "\nPilihan tidak valid.\n";
    }
} while (pilihan != 4);

return 0;

}

