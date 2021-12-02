
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
int sumNodes(Node* root,int sum){
        // Code here
    int res = 0;
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        Node* f = q.front();
        q.pop();
        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
        res += f->data;
    }
    return res;

    }
    //or
int  sumOf_Nodes(Node* root, int k){
    int sum=0;
    vector<vector<int>>res;
    if(root==NULL){
        return 0;
    }
    queue<Node* >q;
    q.push(root);
    while(!q.empty()){
        int length=q.size();
        vector<int>level;
        for(int i=0;i<length;i++){
        Node* temp=q.front();
        q.pop();
        if(temp->left!=NULL){
            q.push(temp->left);
        }
        if(temp->right!=NULL){
            q.push(temp->right);
        }
        sum+=temp->data;
    }
}
    
    return sum;
}

int main(){
    Node*root=BuildTree();
    //cout<<height(root);
    cout<<printKthLevel(root,3);

    
}