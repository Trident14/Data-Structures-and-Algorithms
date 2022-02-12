/brute
class Solution {
    private:
    void helper(TreeNode* r,vector<int>&inorder){
        if(r==NULL) return;
        helper(r->left,inorder);
        inorder.push_back(r->val);
        helper(r->right,inorder);
    }
    public:
    bool findTarget(TreeNode* root, int k) {
        vector<int>inorder;
        helper(root,inorder);
        for(auto it:inorder) cout<<it<<" ";
        int l=0;
        int r=inorder.size()-1;
        while(l<r){
            if(inorder[l]+inorder[r]==k) return true;
            if(inorder[l]+inorder[r]>k){
                r--;
            }else{
                l++;
            }
        }
        return false;
    }
};