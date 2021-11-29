#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int d){
        data=d;
        left=right=NULL;
    }
};
class node{
public:
    int data;
    node*left;
    node*right;
    node(int d){
        data=d;
        left=right=NULL;
    }
};

int main(){
    //crating root node using structure
    //struct Node* root=new Node(1);
    //creating root node using class
    node*root =new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->right=new node(4);
    cout<<root->data<<endl;    
    cout<<root->left->data<<endl;
    cout<<root->right->data<<endl;
    cout<<root->left->right->data<<endl;
}