/* Preorder Build tree and Preorder Print 
input:1,2,4,-1,-1,5,7,-1,-1,-1,3,-1,6,-1,-1
output:1,2,4,5,7,3,6
*/
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
//returen the root nose of the tree
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
    inOrder(root);

}