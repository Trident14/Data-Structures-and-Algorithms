#include<iostream>
#include<queue>
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
int maxWidth(Node*root){
    if(root==NULL) return 0;
    queue<pair<Node*,int>>q;
    q.push({root,0});
    int ans=0;
    while(!q.empty()){
        int len=q.size();
        int first,last;
        for(int i=0;i<len;i++){
            int cur=q.front().second;
            Node* it =q.front().first;
            q.pop();
            if(i==0) first=cur;
            if(i==len-1) last=cur;

        if(it->left) q.push({it->left,cur*2+1});
        if(it->right) q.push({it->right,cur*2+2});

        }
        ans=max(ans,last-first+1);
    }
    return ans;
}
int main(){
    Node*root=BuildTree();
    cout<<maxWidth(root);
}