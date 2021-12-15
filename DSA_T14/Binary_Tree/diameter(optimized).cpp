#include<iostream>
#include<stack>
#include<queue>
#include<vector>
using namespace std;
class HDpair{
public:
    int height;
    int diameter;
};
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
  HDpair diameterOptimize(Node*root){
    HDpair p;
    if(root==NULL){
        p.height=p.diameter=0;
        return p;
    }
     HDpair left=diameterOptimize(root->left);
     HDpair right=diameterOptimize(root->right);

    p.height=max(left.height,right.height)+1; //calculate height

    int d1=left.height+right.height;
    int d2=left.diameter;
    int d3=right.diameter;
    p.diameter= max(d1,max(d2,d3)); //calculate diameter
    return p;
  }

int main(){
    Node*root=BuildTree();
    //cout<<height(root);
   // cout<<diameter(root);
    cout<<diameterOptimize(root).diameter;
}