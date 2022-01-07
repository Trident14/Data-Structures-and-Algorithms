#include<iostream>
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
void LeftView(Node* root,vector<int>&res,int ind){
    if(root==NULL){
        return ;
    }
    if(ind==res.size()){
        res.push_back(root->data);
    }
    LeftView(root->left,res,ind+1); 
    LeftView(root->right,res,ind+1); 
}
int main(){
    vector<int>res;
    Node*root=BuildTree();
    LeftView(root,res,0);
    for(auto it:res){
        cout<<it<<" ";
    }
}