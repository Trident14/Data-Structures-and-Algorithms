#include<iostream>
#include<stack>
using namespace std;
class Node{
public:
    int data;
    Node* left;
    Node* right;
    Node(int d){
        data=d;
        left=right=NULL;
    }
};

Node* BuildTree(){
    int data;
    cin>>data;

    if(data==-1){
        return NULL;
    }
    Node* n=new Node(data);
    n->left=BuildTree(); //creates left subtree
    n->right=BuildTree(); // creates right subtree
    return n;
}
void PostOrderIterative(Node* root){
    if(root==NULL){
        return;
    }
    stack<Node*> st1, st2; 
    st1.push(root); 
    while(!st1.empty()) {
        root = st1.top(); 
        st1.pop();
        st2.push(root); 
        if(root->left != NULL) {
            st1.push(root->left); 
        }
        if(root->right != NULL) {
            st1.push(root->right); 
        }
    }
    while(!st2.empty()) {
        cout<<st2.top()->data<<" "; 
        st2.pop(); 
    }
}
int main(){
    Node*root=BuildTree();
    PostOrderIterative(root);
}
