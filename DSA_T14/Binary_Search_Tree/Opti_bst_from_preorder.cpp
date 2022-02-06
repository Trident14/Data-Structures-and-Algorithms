//O(n) TC  0(1) SC
class Solution {
private:
    TreeNode* Construct(vector<int>&preorder,int &i,int upperBound){
        if(i==preorder.size() || preorder[i]>upperBound) return NULL;
        TreeNode* root=new TreeNode(preorder[i++]);
        root->left=Construct(preorder,i,root->val);
        root->right=Construct(preorder,i,upperBound);
        
        return root;
        
    }
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i=0;
        return Construct(preorder,i,INT_MAX);
    }
};