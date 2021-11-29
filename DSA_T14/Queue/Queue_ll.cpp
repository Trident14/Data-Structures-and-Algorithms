#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int d):data(d),next(NULL){};
};
  Node* head=NULL;
    Node *tail=NULL;
class queue{
public:
    Node *front, *rear;
    queue()
    {
        front = rear = NULL;
    }
 
    void enQueue(int x)
    {
 
        // Create a new LL node
        Node* temp = new Node(x);
 
        // If queue is empty, then
        // new node is front and rear both
        if (rear == NULL) {
            front = rear = temp;
            return;
        }
 
        // Add the new node at
        // the end of queue and change rear
        rear->next = temp;
        rear = temp;
    }
 
    // Function to remove
    // a key from given queue q
    void deQueue()
    {
        // If queue is empty, return NULL.
        if (front == NULL)
            return;
 
        // Store previous front and
        // move front one node ahead
        Node* temp = front;
        front = front->next;
 
        // If front becomes NULL, then
        // change rear also as NULL
        if (front == NULL)
            rear = NULL;
 
        delete (temp);
    }
};
int main(){
    queue q;
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    q.deQueue();
    cout<<q.front->data;
   

#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int d):data(d),next(NULL){};
};
  Node* head=NULL;
    Node *tail=NULL;
class queue{
public:
    Node *front, *rear;
    queue()
    {
        front = rear = NULL;
    }
 
    void enQueue(int x)
    {
 
        // Create a new LL node
        Node* temp = new Node(x);
 
        // If queue is empty, then
        // new node is front and rear both
        if (rear == NULL) {
            front = rear = temp;
            return;
        }
 
        // Add the new node at
        // the end of queue and change rear
        rear->next = temp;
        rear = temp;
    }
 
    // Function to remove
    // a key from given queue q
    void deQueue()
    {
        // If queue is empty, return NULL.
        if (front == NULL)
            return;
 
        // Store previous front and
        // move front one node ahead
        Node* temp = front;
        front = front->next;
 
        // If front becomes NULL, then
        // change rear also as NULL
        if (front == NULL)
            rear = NULL;
 
        delete (temp);
    }
};
int main(){
    queue q;
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    q.deQueue();
    cout<<q.front->data;
   


}