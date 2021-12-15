#include<iostream>
#include<stack>
#include<queue>
#include<vector>
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
    int height(Node*root){
        if(root==NULL){
            return 0;
        }
        int m=height(root->left);
        int n=height(root->right);
        return 1+min(m,n);
    }
 

int main(){
    Node*root=BuildTree();
    cout<<height(root);
 }