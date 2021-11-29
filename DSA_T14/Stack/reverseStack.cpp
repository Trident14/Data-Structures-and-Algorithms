#include<iostream>
#include<stack>
#include<vector>
using namespace std;
//insert at bottom of stack
void push_at_bottom(stack<int>&s ,int data){
   if(s.empty()){
        s.push(data);
        return;
   }
   int temp=s.top();
   s.pop();
   push_at_bottom(s,data);
   s.push(temp);
}
void reverse(stack<int>&s){
    if(s.empty()){
        return;
    }
    int temp=s.top();
    s.pop();
    reverse(s);
    push_at_bottom(s,temp);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    stack<int> stack;
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    int data;
    cin>>data;
    push_at_bottom(stack,data);
    reverse(stack);
    while (!stack.empty()) {
        cout <<' '<< stack.top();
        stack.pop();
    }
return 0;
}