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
Node* levelOrderBuilder(){
    int data;
    cin>>data;
    Node*root=new Node(data);
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node*temp=q.front();
        q.pop();
        int c1,c2;
        cin>>c1>>c2;
        if(c1!=-1){
            temp->left=new Node(c1);
            q.push(temp->left);
        }
        if(c2!=-1){
            temp->right=new Node(c2);
            q.push(temp->right);
        }
    }
    return root;
}
//PostOrder left righ root
void levelOrder(Node*root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node*temp=q.front();
        if(temp==NULL){
            cout<<endl;
            q.pop();

            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            q.pop();
            cout<<temp->data<<" ";
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
    }
}

    void level(Node*root,vector<vector<int>>&res){
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int s=q.size();
            vector<int>level;
            for(int i=0;i<s;i++){
                Node*temp=q.front();
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
}

int main(){
    Node*root=levelOrderBuilder();
   levelOrder(root);
   vector<vector<int>>res;
   level(root,res);
   for(int i=0;i<res.size();i++){
    for(auto it:res[i]){
        cout<<it<<" ";
    }
    cout<<endl;
   }
}