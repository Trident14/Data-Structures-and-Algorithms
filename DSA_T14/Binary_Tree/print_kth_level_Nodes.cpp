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

vector<int> printKthLevel(Node* root, int k){
    vector<int>ans;
    vector<vector<int>>res;
    if(root==NULL){
        return ans;
    }
    queue<Node* >q;
    q.push(root);
    while(!q.empty()){
        int length=q.size();
        vector<int>level;
        for(int i=0;i<length;i++){
        Node* temp=q.front();
        q.pop();
        if(temp->left!=NULL){
            q.push(temp->left);
        }
        if(temp->right!=NULL){
            q.push(temp->right);
        }
        level.push_back(temp->data);
    }
     res.push_back(level);
    }
    for(int i=0;i<res[k].size();i++){
        ans.push_back(res[k][i]);
    }
    return ans;
}
int main(){
    Node*root=BuildTree();
    //cout<<height(root);
    vector<int>temp=printKthLevel(root,3);

    for(auto it:temp){
        cout<<it<<" ";
    }
}