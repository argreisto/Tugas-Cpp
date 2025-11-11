#include <iostream>
using namespace std;
#define MAX 5	
class CirQueue	//Deklarasi Circular Queue
{
 private:
 int front ;
 int rear ;
 int count ;
 int ele[MAX] ;
 public:
 CirQueue();
 int isFull();
 int isEmpty();
 void insertQueue(int item);
 int deleteQueue(int *item);
};
CirQueue:: CirQueue()	//Inisialisasi Circular Queue
{
 front = 0;
 rear = -1;
 count = 0;
}
int CirQueue:: isFull()		//Untuk mengecek queue sudah penuh atau belum
{
 int full=0;
 if( count == MAX )
 full = 1;
 return full;
}
int CirQueue:: isEmpty()	//Untuk memeriksa antrian kosong atau tidak
{
 int empty=0;
 if( count == 0 )
 empty = 1;
 return empty;
}
void CirQueue:: insertQueue(int item)	//Sisipkan item ke dalam antrian melingkar
{
 if( isFull() )
 {
 cout<<"\nQueue Overflow";
 return;
 }
 rear= (rear+1) % MAX;
 ele[rear] = item;
 count++;
 cout<<"\ndimasukkan item : "<< item;
}
int CirQueue:: deleteQueue(int *item)	//Hapus item dari circular queue
{
 if( isEmpty() )
 {
 cout<<"\nQueue Underflow";
 return -1;
 }
 *item = ele[front];
 front = (front+1) % MAX;
 count--;
 return 0;
}
int main()
{
 int item;
 CirQueue q = CirQueue();
 q.insertQueue(10);
 q.insertQueue(20);
 q.insertQueue(30);
 q.insertQueue(40);
 q.insertQueue(50);
 q.insertQueue(60);
 if( q.deleteQueue(&item) == 0 )
 {
 cout<<"\nItem dihapus:"<< item<< endl;
 }
 if( q.deleteQueue(&item) == 0 )
 {
 cout<<"\nItem dihapus:"<< item<< endl;
 }
 if( q.deleteQueue(&item) == 0 )
 {
 cout<<"\nItem dihapus:"<< item << endl;
 }
 if( q.deleteQueue(&item) == 0 )
 {
 cout<<"\nItem dihapus:"<< item<< endl;
 }
 if( q.deleteQueue(&item) == 0 )
 {
 cout<<"\nItem dihapus:"<< item<< endl;
  }
 q.insertQueue(60);
 if( q.deleteQueue(&item) == 0 )
 {
 cout<<"\nItem dihapus:"<< item<< endl;
 }
 if( q.deleteQueue(&item) == 0 )
 {
 cout<<"\nItem dihapus:"<< item<< endl;
 }	cout<<"\n";
 return 0;
}
