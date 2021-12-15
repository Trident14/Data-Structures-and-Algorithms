/* Preorder Build tree and Preorder Print 
input:1,2,4,-1,-1,5,7,-1,-1,-1,3,-1,6,-1,-1
output:1,2,4,5,7,3,6
*/
#include<bits/stdc++.h>
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

int MaxPathSum(Node*root,int &maxi){
    if(root==NULL){
        return 0;
    }
    MaxPathSum(root->left,maxi);
    MaxPathSum(root->right,maxi);
    maxi+=root->data;
}

int main(){
    Node*root=BuildTree();
    int maxi=0;
    MaxPathSum(root,maxi);
    if(maxi-root->data==root->data){
        cout<<"yes";
    }else{
        cout<<"NO";
    }

    
}