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
public:
    vector<int> inorderTraversal(TreeNode* root) {
        //using morris traversal
        vector<int>res;
        TreeNode* cur=root;
        while(cur!=NULL){
            if(cur->left==NULL){
                res.push_back(cur->val);
                cur=cur->right;
            }else{
                TreeNode* prev=cur->left;
                //move to the right most node in the left subtree
                //while checking if there is no thread already present
                while(prev->right  && prev->right!=cur) {
                    prev=prev->right;
                }
                //There are two possible outcome:
                if(prev->right==NULL){
                    prev->right=cur;
                    cur=cur->left;
                }else{
                    //break the existing thread and push the current val
                    prev->right=NULL;
                    res.push_back(cur->val);
                    cur=cur->right;
                }
                
            }
        }
        return res;
    }
};