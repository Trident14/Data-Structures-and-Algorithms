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
    int ans=0;
    q.push({root,0});
    while(!q.empty()){
        int len=q.size();
        int minele=q.front().second;
        int first,last;
        for(int i=0;i<len;i++){
            int curid=q.front().second-minele;
            Node* it=q.front().first;
            q.pop();
            if(i==0) first=curid;
            if(i==len-1) last=curid;
            if(it->left) q.push({it->left,curid*2+1});
            if(it->right) q.push({it->right,curid*2+2});
        }
        ans=max(ans,last-first+1);
    }
    return ans;
}
int main(){
    Node*root=BuildTree();
    cout<<maxWidth(root);
}