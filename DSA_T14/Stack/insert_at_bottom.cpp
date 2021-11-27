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
    //stores the current element
    int temp=s.top();
    s.pop();
    push_at_bottom(s,data);
    s.push(temp);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    stack<int> stack;
    stack.push(21);
    stack.push(22);
    stack.push(24);
    stack.push(25);
    int data;
    cin>>data;
    push_at_bottom(stack,data);
    while (!stack.empty()) {
        cout << ' ' << stack.top();
        stack.pop();
    }
return 0;
}