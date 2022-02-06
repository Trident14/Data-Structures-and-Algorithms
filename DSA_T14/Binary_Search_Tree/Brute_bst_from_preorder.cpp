class Solution {
private:
    TreeNode* insertBST(TreeNode*root ,int val){
        if(root==NULL)
	{
		return new TreeNode(val);
	}
	if(val<root->val)
	{
		root->left=insertBST(root->left,val);
	}
	else
	{
		root->right=insertBST(root->right,val);
	}
	return root;
        
    }
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* root=NULL;
        for(auto it:preorder){
            root=insertBST(root,it);
        }
        return root;
    }
};
