/* inp->1 2 4 -1 -1 5 -1 -1 3 -1 6 -1 -1 
   op -> 1 3 2 4 5 6  */
#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int d){
        val=d;
        left=right=NULL;
    }
};
// build tree traversal
Node* BuildTree(){
    int val;
    cin>>val;

    if(val==-1){
        return NULL;
    }
    Node* n=new Node(val);
    n->left=BuildTree(); //creates left subtree
    n->right=BuildTree(); // creates right subtree
    return n;
}

int maxPathSum(Node*root,int &maxi){
    if(root==NULL){
        return 0;
    }
    int left=max(0,maxPathSum(root->left,maxi));
    int right=max(0,maxPathSum(root->right,maxi));
     maxi=max(maxi,left+right+root->val);
    return root->val+max(left,right);
}

int main(){
    Node*root=BuildTree();
    int maxi=0;
    maxPathSum(root,maxi);
    cout<<maxi;
   
}