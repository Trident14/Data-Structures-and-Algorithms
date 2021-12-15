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
    // int height(Node*root){
    //     if(root==NULL){
    //         return 0;
    //     }
    //     int m=height(root->left);
    //     int n=height(root->right);
    //     return 1+max(m,n);
    // }

    // int diameter(Node*root){
    //     if(root==NULL){
    //         return 0;
    //     }
    //     int d1=height(root->left)+height(root->right);
    //     int d2=diameter(root->left);
    //     int d3=diameter(root->right);

    //     return max(d1,max(d2,d3));
    // }

int Find_diameter(Node*root,int &dia){
    if(root==NULL){
        return 0;
    }
    int h1=Find_diameter(root->left,dia);
    int h2=Find_diameter(root->right,dia);
    dia=max(dia,h1+h2);
    return 1+max(h1,h2);
}


int main(){
    Node*root=BuildTree();
    //cout<<height(root)
    int dia=0;
    Find_diameter(root,dia);
    cout<<dia;n
}