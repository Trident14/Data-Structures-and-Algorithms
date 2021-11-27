#include <iostream>
using namespace std;
template<typename T>
class Stack;


template<typename T>
class Node{
public:
        T data;
        Node<T> *next;

        Node(T d){
                data = d;
        }
};

template<typename T>
class Stack{
        Node<T> * head;
public:

        Stack(){
                head = NULL;
        }

        void push(T data){
                Node<T> * n = new Node<T>(data);
                n->next = head;
                head = n;
        }
        bool empty(){ 
                return head==NULL;
        }

        T top(){
                return head->data;      
        }

        void pop(){
                if(head!=NULL){
                        Node<T> * temp = head;
                        head = head->next;
                        delete temp;
                }

        }
};

int main(){
	Stack<int>s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);

	while(!s.empty()){
		cout<<s.top()<<endl;
		s.pop();
	}
}