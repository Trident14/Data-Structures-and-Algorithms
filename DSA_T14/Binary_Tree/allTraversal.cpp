/* Preorder Build tree and Preorder Print 
input:1,2,4,-1,-1,5,7,-1,-1,-1,3,-1,6,-1,-1
output:1,2,4,5,7,3,6
*/
#include<bits/stdc++.h>
#include<iostream>
#include<stack>
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

void AllTrversal(Node* root,vector<int>&pre,vector<int>&in,vector<int>&post){    
     stack<pair<Node*,int>>s;
    s.push({root,1});
    while(!s.empty()){
        auto temp=s.top();
        s.pop();
        if(temp.second==1){
            pre.push_back(temp.first->data);
            temp.second++;
            s.push(temp);

            if(temp.first->left!=NULL){
                s.push({temp.first->left,1});
            }
        }else if(temp.second==2){
            in.push_back(temp.first->data);
            temp.second++;
            s.push(temp);

            if(temp.first->right!=NULL){
                s.push({temp.first->right,1});
            }
        }else{
            post.push_back(temp.first->data);
        }
    }
}
int main(){
    Node*root=BuildTree();
    vector<int>pre,in,post;
    AllTrversal(root,pre,in,post);

    for(auto it:pre){
        cout<<it<<" ";
    }
    cout<<endl;
    for(auto it:in){
        cout<<it<<" ";
    }
    cout<<endl;
    for(auto it:post){
        cout<<it<<" ";
    }
    cout<<endl;
}
