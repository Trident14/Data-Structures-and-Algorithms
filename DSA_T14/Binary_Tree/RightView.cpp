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
void RightView(Node* root,vector<int>&res,int ind){
    if(root==NULL){
        return ;
    }
    if(ind==res.size()){
        res.push_back(root->data);
    }
    RightView(root->right,res,ind+1); //print the left subtree
    RightView(root->left,res,ind+1); //print the right subtree
}
int main(){
    vector<int>res;
    Node*root=BuildTree();
    RightView(root,res,0);
    for(auto it:res){
        cout<<it<<" ";
    }
}