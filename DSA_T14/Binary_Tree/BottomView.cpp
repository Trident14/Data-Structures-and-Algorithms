#include<iostream>
#include<vector>
#include<queue>
#include<map>
#include<set>
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
vector<int> BottomView(Node*root){
    vector<int>res;
    queue<pair<Node*,int>>q;
    map<int,int>mp;
    q.push({root,0});
    while(!q.empty()){
        auto it=q.front();
        q.pop();
        int level=it.second;
        Node* temp=it.first;
        mp[level]=temp->data;
        if(temp->left!=NULL) q.push({temp->left,level-1});
        if(temp->right!=NULL) q.push({temp->right,level+1});
    }
    for(auto x:mp){
        res.push_back(x.second);
    }
    return res;
}
int main(){
    Node*root=BuildTree();
    vector<int>res=BottomView(root);
    

    for(auto it:res){
        cout<<it<<" ";
    }
    
}
