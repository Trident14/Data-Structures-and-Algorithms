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
// build tree traversal
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
bool isLeaf(Node*root){
    if(!root->left && !root->right) return true;
    return false;
}

void addLeftBoundary(Node*root,vector<int>&res){
    Node*it=root->left;
    vector<int>temp;
    if(!isLeaf(it)){
        temp.push_back(it->data);
        if(it->left) it=it->left;
        else it=it->right;
    }
    for(int i=temp.size()-1;i>=0;i--){
        res.push_back(temp[i]);
    }
}
void addRightBoundary(Node*root,vector<int>&res){
    Node* temp=root->right;
    if(!isLeaf(temp)){
        res.push_back(temp->data);
        if(temp->right) temp=temp->right;
        else temp=temp->left;
    }
}
void addLeaf(Node*root,vector<int>&res){
    if(isLeaf(root)){
        res.push_back(root->data);
        return;
    }
    if(root->left!=NULL) addLeaf(root->left,res);
    if(root->right!=NULL) addLeaf(root->right,res);
}

int main(){
    Node*root=BuildTree();
    vector<int>res;
    if(!isLeaf(root)) res.push_back(root->data);
    addRightBoundary(root,res);
    addLeaf(root,res);
    addLeftBoundary(root,res);

    for(auto it:res){
        cout<<it<<" ";
    }
    
}
