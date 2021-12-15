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
void printTree(Node* root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" "; //print the root (main)
    printTree(root->left); //print the left subtree
    printTree(root->right); //print the right subtree
}
int main(){
    Node*root=BuildTree();
    printTree(root);
}