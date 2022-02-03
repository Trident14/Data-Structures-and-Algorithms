class Solution {
private:
    TreeNode* rightMostChild(TreeNode*root){
        if(root->right==NULL) return root;
        return rightMostChild(root->right);
    }
    TreeNode* helper(TreeNode* root){
        if(root->left==NULL){
            return root->right;
        }else if(root->right==NULL){
            return root->left;
        }
        TreeNode* rightChild=root->right;
        TreeNode* lastRightChild=rightMostChild(root->left);
        lastRightChild->right=rightChild;
        return root->left;
    }
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL) return NULL;
        if(root->val==key) return helper(root);
        TreeNode*cur=root;
        while(root!=NULL){
        if(key<=->val){
            if(root->left!=NULL && root->left->val==key){
                root->left=helper(root->left);
                break;
            }else{
                root=root->left;
            }
        }else{
             if(root->right!=NULL && root->right->val==key){
                root->right=helper(root->right);
                 break;
            }else{
                root=root->right;
            }
        }
    }
    return cur;
    }
};