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

bool PathToNode(Node*root,vector<int>&res,int key){
    if(root==NULL){
        return false;
    }
    res.push_back(root->data);
    if(root->data==key) return true;
    if((PathToNode(root->left,res,key) || PathToNode(root->right,res,key))){
        return true;
    }
    res.pop_back();
    return false;

}
/* Better way TC->o(n) Space-> stack space worst case o(n)
   TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        //base case
        if (root == NULL || root == p || root == q) {
            return root;
        }
        TreeNode* left = lowestCommonAncestor(root->left, p, q);
        TreeNode* right = lowestCommonAncestor(root->right, p, q);

        //result
        if(left == NULL) {
            return right;
        }
        else if(right == NULL) {
            return left;
        }
        else { //both left and right are not null, we found our result
            return root;
        }
    }
*/

int main(){
    Node*root=BuildTree();
    vector<int>res1;
    vector<int>res2;
    int ans=0;
    PathToNode(root,res2,2);
    PathToNode(root,res1,8);
    for(int i=0;i<min(res1.size(),res2.size());i++){
        if(res1[i]==res2[i]){
            continue;
        }else{
            ans=res1[i-1];
        }
    }
    cout<<ans;
}