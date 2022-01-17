
class Solution {
private:
    TreeNode* buildTree(vector<int>&preorder,int preStart,int preEnd,vector<int>&inorder,int                                                                     inStart,int inEnd,map<int,int>&mp){
        
        if(preStart>preEnd || inStart>inEnd) return nullptr;
        
        TreeNode* it=new TreeNode(preorder[preStart]);
        int inR=mp[it->val];
        int leftEle=inR-inStart;
        it->left=buildTree(preorder,preStart+1,preStart+leftEle,inorder,inStart,inR-1,mp);
        it->right=buildTree(preorder,preStart+leftEle+1,preEnd,inorder,inR+1,inEnd,mp);
        
        return it;
    }
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
       map<int,int>mp;
    for(int i=0;i<inorder.size();i++){
        mp[inorder[i]]=i;
    }
    TreeNode* root=buildTree(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,mp);
	return root;
        
        
    }
};