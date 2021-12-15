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
void InOrderIterative(Node* root){
    if(root==NULL){
        return;
    }
    Node* node=root;
    stack<Node*>s;
    while(true){
        if(node!=NULL){
            s.push(node);
            node=node->left;
        }else{
            if(s.empty()) break;
            node=s.top();
            s.pop();
            cout<<node->data<<" ";
            node=node->right;
        }
    }
}
int main(){
    Node*root=BuildTree();
    InOrderIterative(root);
}
