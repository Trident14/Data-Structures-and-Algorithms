#include <iostream>
#include <vector>
#include <cmath>
#include<queue>
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
class que{
public:
    int len;
    Node<T>*head;
    Node<T>*tail;
    
  que(){
    len=0;
    head=tail=NULL;
  }
   
   void insert(T data){
    len++;
    Node<T>*newNode= new Node<T>(data);
    if(head==NULL) {
        head=tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
     
   };
   
   void pop(){
    if(head==NULL) return ;
    Node<T>*temp=head;
    head=head->next;
    delete(temp);
    len--;
   };
   
   int peek(){
     if(head==NULL) return -1;
     return head->data;
   };
   
};


int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
        freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
        
      
   que<int>q;
   q.insert(1);
   q.insert(2);
     q.insert(3);
    q.insert(5);
    
q.pop();q.pop();q.pop();q.pop();q.pop();q.pop();
     
   while(q.len!=0){
    cout<<q.peek()<<" ";
    q.pop();
   }
}
