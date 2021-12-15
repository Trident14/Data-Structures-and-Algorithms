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
void preOrderIterative(Node* root){
    if(root==NULL) return;
    stack<Node*>s;
    s.push(root);
    while(!s.empty()){
        Node*temp=s.top();
        s.pop();
        if(temp->right!=NULL){
            s.push(temp->right);
        }
        if(temp->right!=NULL){
            s.push(temp->left);
        }
        cout<<temp->data<<" ";
    }

}
int main(){
    Node*root=BuildTree();
    preOrderIterative(root);
}