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

bool PathToNode(Node*root,vector<int>&res,int key){
    if(root==NULL){
        return false;
    }
    res.push_back(root->data);
    if(root->data==key) return true;
    if((PathToNode(root->left,res,key) || PathToNode(root->right,res,key))){
        return true;
    }
    res.pop_back();
    return false;

}

int main(){
    Node*root=BuildTree();
    int key=5;
    vector<int>res;
    PathToNode(root,res,key);
    for(auto it:res){
        cout<<it<<" ";
    }
    
}