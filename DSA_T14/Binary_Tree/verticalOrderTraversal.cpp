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
vector<int> verticalOrderTraversal(Node*root){
    vector<vector<int>>ans;
    queue<pair<Node*,pair<int,int>>>q;
    map<int,map<int,multiset<int>>>mp;
    q.push({root,{0,0}});
    while(!q.empty()){
        auto p=q.front();
        q.pop();
        Node* node=p.first;
        int x=p.second.first;
        int y=p.second.second;
        mp[x][y].insert(node->data);
        if(node->left!=NULL) q.push({node->left,{x-1,y+1}});
        if(node->right!=NULL) q.push({node->right,{x+1,y+1}});
           
    }
     vector<int>res;
    for(auto it:mp){
       
        for(auto x:it.second){
            res.insert(res.end(),x.second.begin(),x.second.end());
        }
        ans.push_back(res);
    }
    return res;
}
int main(){
    Node*root=BuildTree();
    vector<int>res=verticalOrderTraversal(root);
    

    for(auto it:res){
        cout<<it<<" ";
    }
    
}
