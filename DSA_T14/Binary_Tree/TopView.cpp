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
vector<int> TopView(Node*root){
    queue<pair<Node*,int>>q;
    map<int,int>mp;
    q.push({root,0});
    while(!q.empty()){
        auto it=q.front();
        q.pop();
        int level=it.second;
        Node* ptr=it.first;
        if(mp.find(level)==mp.end()) mp[level]=ptr->data;
        if(ptr->left!=NULL) q.push({ptr->left,level-1});
        if(ptr->right!=NULL) q.push({ptr->right,level+1});
    }
    vector<int>res;
    for(auto it:mp){
        res.push_back(it.second);
    }
    return res;
}
int main(){
    Node*root=BuildTree();
    vector<int>res=TopView(root);
    

    for(auto it:res){
        cout<<it<<" ";
    }
    
}
