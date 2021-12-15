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
    int leftSum=max(0,MaxPathSum(root->left,maxi));
    int rightSum=max(0,MaxPathSum(root->right,maxi));
    maxi=max(maxi,leftSum+rightSum+root->data);
    return root->data+max(leftSum,rightSum);
}

int main(){
    Node*root=BuildTree();
    int maxi=INT_MIN;
    MaxPathSum(root,maxi);
    cout<<maxi<<endl;
    
}