#include<iostream>
#include<stack>

using namespace std;

//Implement a Queue Class, which uses 2 Stack internally as a data structure.

class Queue{
    stack<int> input,output;
public:
    void push(int x){
        input.push(x);
    }
    void pop(){
        if(output.empty()){
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
        }
    }
    int front(){
        if(output.empty()){
            cout<<"Empty";
        }
        else{
            int x=output.top();
            output.pop();
            return x;
        }
    }
    bool isEmpty(){
        return output.empty();
    }
};

int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
   
    

    return 0;

}



