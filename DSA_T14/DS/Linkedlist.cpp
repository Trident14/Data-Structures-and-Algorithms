#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

template <typename T>
class Node{
public:
    T data;
    Node<T> *next;
    
public:
    Node(T value){
        data=value;
        next=NULL;
    }
};

template <typename T>
class LinkedList{
    Node<T>*head;
    
    public:
   LinkedList(): head(NULL) {}
   
   
   void appendFront(T val){
    Node<T>*newNode=new Node<T>(val);
    
    if(head==NULL){
        head=newNode;
    }else{
        newNode->next=head;
        head=newNode;
    }
   }
   
   void appendBack(T val){
    Node<T>*newNode=new Node<T>(val);
    
    Node<T>*cur =head;
    
    
    if(cur==NULL) head=newNode;
    else{
        while(cur->next!=NULL){
            cur=cur->next;
        }
        
        cur->next=newNode;
       }
    }
   
   
   void printLL(){
    Node<T>*cur=head;
    while(cur!=NULL){
        cout<<cur->data<<"->";
        cur=cur->next;
    }
   }
   
};


int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
        freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
   
   LinkedList<int>ll;
   ll.appendBack(1);
   ll.appendBack(2);
   ll.appendBack(3);
   ll.appendFront(4);
  ll.printLL();
   
}
