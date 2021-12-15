
#include<iostream>
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
// PreOrder ->root left right
void preOrder(Node* root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" "; //print the root (main)
    preOrder(root->left); //print the left subtree
    preOrder(root->right); //print the right subtree
}
//inOrder -> left root right
void inOrder(Node*root){
    if(root ==NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
//PostOrder left righ root
void postOrder(Node*root){
    if(root==NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

int main(){
    Node*root=BuildTree();
    preOrder(root);
    cout<<endl;
    inOrder(root);
    cout<<endl;
    postOrder(root);
}