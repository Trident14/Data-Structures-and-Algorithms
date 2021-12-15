/* inp->1 2 4 -1 -1 5 -1 -1 3 -1 6 -1 -1 
   op -> 1 3 2 4 5 6  */
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
//zig zag traversal 

void zigZagTraversal(Node*root,vector<int>&res){
    bool flag=true;
    if(root==NULL){
        return ;
    }
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        int size_Of_Queue=q.size();
        std::vector<int> v(size_Of_Queue);
        for(int i=0;i<size_Of_Queue;i++){
            root=q.front();
            q.pop();
            int ind=flag?i:size_Of_Queue-i-1;
            v[ind]=root->data;
            if(root->left!=NULL) q.push(root->left);
            if(root->right!=NULL) q.push(root->right);
        }
        flag=!flag;  

        for(auto it:v){
            res.push_back(it);
        }
    }
 
}

int main(){
    Node*root=BuildTree();
    vector<int>res;
    zigZagTraversal(root,res);
    for(auto it:res){
        cout<<it<<" ";
    }
}
