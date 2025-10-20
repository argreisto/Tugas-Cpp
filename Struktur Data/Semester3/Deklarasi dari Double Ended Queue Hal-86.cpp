#define MAX 5
//Deklarasi Double Ended Queue
class DQueue
{
 private:
 int front ;
 int rear ;
 int count ;
 int ele[MAX] ;
 public:
 DQueue();
 int isFull();
 int isEmpty();
 void insertDQueueAtRear(int item);
 int deleteDQueueAtFont(int *item);
 void insertDQueueAtFront(int item);
 int deleteDQueueAtRear(int *item);
};
