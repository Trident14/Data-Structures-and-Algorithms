#include<iostream>
using namespace std;
#define size 5
class stack{
    int top;
public:
    stack():top(-1) {};
    int arr[size];
    void push(int data){
        if(top>=(size-1)){
            cout<<"Stack Overflow\n";
        }else{
            
            arr[++top]=data;
            cout<<data<<" pushed into stack\n";
        }
    }
    int pop(){
        if(top<0){
            cout<<"Stack underflow\n";
        }else{
            return arr[top--];
        }
    }
    int peak(){
        if(top<0){
            cout<<"stack underflow\n";
        }else{
            return arr[top];
        }
    }
    bool isEmpty(){
        return (top<0);
    }
    
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.pop();
    s.push(2);
    s.push(5);
    while(!s.isEmpty()){
        cout<<s.peak()<<" ";

        s.pop();

    }

    

return 0;
}