#include <iostream>
#include <vector>
#include <cmath>
#include<stack>
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
class sta{
public:
    int len;
    Node<T>*head;
    
    
  sta(){
    len=0;
    head=NULL;
  }
   
   void insert(T data){
    len++;
    Node<T>*newNode= new Node<T>(data);
    if(head==NULL){
        head=newNode;
        return;
    }
    newNode->next=head;
    head=newNode;
     
   };
   
   void pop(){
    if(head==NULL) return ;
    len=len-1;
    if(len==0) {
        head=NULL;
        
        return;}
        
    Node<T>*t=head;
    head=head->next;
    delete(t);
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
   
   cout<<endl;
      
   sta<int>stack;
   stack.insert(1);
   stack.insert(2);
     stack.insert(3);
    stack.insert(4);
    stack.pop();

     
   while(stack.len!=0){
    cout<<stack.peek()<<" ";
    stack.pop();
   }
}
