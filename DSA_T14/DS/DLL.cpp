#include <iostream>
using namespace std;

class Node {
public:
    Node* prev;
    Node* next;
    int data;

    Node(int data) {
        prev = next = NULL;
        this->data = data;
    }
};

class DLL {
public:
    Node* head, *tail;
    int len;

    DLL() {
        len=0;
        head = NULL;
        
    }

    void prepend(int val) {
        
        Node* newNode = new Node(val);
        len++;

        if (head == NULL) {
            head = tail=newNode;
            return;
        }
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    
    void appeend(int val){
        Node* newNode = new Node(val);
        
        
        len++;
         if (tail == NULL) {
            head = tail=newNode;
            return;
        }
        tail->next=newNode;
        newNode->prev=tail;
        tail=newNode;
    }
    
   void insertAt(int pos, int val) {
        if (pos < 0 || pos > len) {
            cout << "Invalid position: " << pos << endl;
            return;
        }
        Node* n = new Node(val);

        if (pos == 0) {
            
            prepend(val);
            return;
        } else if(pos==len){
           
            appeend(val);
            return;
            
        }else{
            len++;
            Node* cur = head;
            while (--pos) {
                cur = cur->next;
            }

           Node*temp=cur->next;
           if(temp!=NULL){
            cur->next=n;
            n->prev=cur;
            n->next=temp;
            temp->prev=n;
           } else{
            cur->next=n;
            n->prev=cur;
           }
        }
    }
    
    void deleteNode(int val){
       
        Node* cur = head;
        
        while(cur->data!=val || cur==NULL){
            cur = cur->next;
        }
        cout<<"cur :"<<cur->data<<endl;
        cur->prev->next=cur->next;
        cur->next->prev=cur->prev;
        
       
    }


    void printDLL() {
        Node* current = head;

        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
    
    
    int getLen(){
        return len;
    }
};

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    DLL myDLL;
    myDLL.prepend(3);
    myDLL.prepend(2);
    myDLL.prepend(1);
    myDLL.prepend(0);
    
   
    myDLL.appeend(4);
    myDLL.prepend(-1);
    
     myDLL.insertAt(6,100);
     myDLL.deleteNode(0);
    
     cout<<myDLL.getLen()<<endl;
    
    myDLL.printDLL();

    return 0;
}
