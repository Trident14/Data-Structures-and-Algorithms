//brute
class Solution {
private:
    void helper(TreeNode* r,vector<int>&vec){
        if(r==NULL) return;
        helper(r->left,vec);
        vec.push_back(r->val);
        helper(r->right,vec);
    }
    void solve(TreeNode* root,vector<int>&vec,int &i){
        if(root==NULL) return;
        solve(root->left,vec,i);
            root->val=vec[++i];
        solve(root->right,vec,i);
    }
public:
    void recoverTree(TreeNode* root) {
        vector<int>vec;
        int i=-1;
        helper(root,vec);
        sort(vec.begin(),vec.end());
        solve(root,vec,i);
        
    }
};