#include<bits/stdc++.h>
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
int height(Node* root){
    if(root==NULL) return 0;
    int m=height(root->left);
    int n=height(root->right);
    return 1+max(m,n);
}

bool isBalanced(Node*root){
    if(root==NULL) return false;
    int h1=isBalanced(root->left);
    int h2=isBalanced(root->right);
    if(h1==-1 or h2==-1) return -1;
    if(abs(h1-h2)>1) return -1;
    return 1+max(h1,h2);
}

//brute force
bool Balanced(Node*root){
    if(root==NULL) return false;
    int h1=height(root->left);
    int h2=height(root->right);
    if(abs(h1-h2)>1) return false;

    bool left=Balanced(root->left);
    bool right=Balanced(root->right);
    if(!left or !right) return false;
    return true;

}
int main(){
    Node*root=BuildTree();
    cout<<isBalanced(root);
}
