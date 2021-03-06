/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    TreeNode* buildT(vector<int>postorder,int ps,int pe,vector<int>inorder,int is,int ie,
                    map<int,int>&mp){
        
        if(ps>pe || is>ie) return NULL;
        
        TreeNode* it=new TreeNode(postorder[pe]);
        int iR=mp[it->val];
        int numL=iR-is;
        
        it->left=buildT(postorder,ps,ps+numL-1,inorder,is,iR-1,mp);
        it->right=buildT(postorder,ps+numL,pe-1,inorder,iR+1,ie,mp);
        return it;
    }
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        map<int,int>mp;
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]]=i;
        }
        return buildT(postorder,0,postorder.size()-1,inorder,0,inorder.size()-1,mp);
    }
};