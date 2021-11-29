#include<iostream>
using namespace std;
class list;
class Node{
    int data;
public:
    Node* next;
    Node(int d):data(d),next(NULL){};
    int getData(){
        return data;
    }
   ~Node(){
        if(next!=NULL){
            delete next;
        }
        cout<<"Deleting: "<<data<<endl;
   } 
};
class list{
    Node* head;
    Node* tail;
public:
    list():head(NULL),tail(NULL){}; 

    void push_front(Node* &head, int data){
        if(head==NULL){
            Node* n=new Node(data);
           head=tail=n;
        }else{
            Node* n=new Node(data);
            n->next=head;
            head=n;
        }
    }
    void push_back(Node* &head, int data){
         if(head==NULL){
            Node* n=new Node(data);
           head=tail=n;
        }else{
            Node* n =new Node(data);
            tail->next=n;
            tail=n;
        }
    }
    void insert(Node* &head,int data,int pos){
        if(pos==0){
            push_front(head,data);
        }else{
            Node* temp=head;
            for(int jump=0;jump<=pos-1;jump++){
                temp=temp->next;
            }
            Node* n=new Node(data);
            n->next=temp->next;
            temp->next=n;
        }
    }
    void pop_front(Node* &head){
        if(head==NULL){
            return;
        }
        Node *temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
   ~list(){
        if(head!=NULL){
            delete head;
            head=NULL;
        }
   }  

   void reverse(Node* &head){
        Node*temp;
        Node* current =head;
        Node*prev=NULL;
        while(current!=NULL){
            temp=current->next;
            current->next=prev;
            prev=current;
            current=temp;
        }
        head=prev;
   }
   int size(Node* &head){
    Node* temp=head;
    int cnt=0;
    while(temp!=NULL){
        cnt++;
        temp=temp->next;
    }
    return cnt;
  } 
   int kth(Node* head,int pos){
        Node*temp=head;
        for(int i=0;i<size(head)-pos;i++){
            temp=temp->next;
        }
        return temp->getData();
   }
    void print(Node* &head){
        while(head!=NULL){
            cout<<head->getData()<<"->";
            head=head->next;
        }
    }

};
int main(){
    list l;
    Node* head=NULL;

    l.push_front(head,4);
    l.push_front(head,3);
    l.push_front(head,2);
    l.push_back(head,6);
    l.push_front(head,1);
    l.insert(head,5,3);
    l.push_front(head,0);
    l.reverse(head);
  cout<<l.size(head)<<endl;
  cout<<l.kth(head,3)<<endl;
   
    l.print(head);
   

}