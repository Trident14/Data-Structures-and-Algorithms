 //Recursive
 TreeNode* searchBST(TreeNode* root, int val) {
        if(root==NULL) return NULL;
        if(root->val==val) return root;
        
        return val<root->val?searchBST(root->left,val):searchBST(root->right,val);
    }

//Iterative
 TreeNode* searchBST(TreeNode* root, int val) {
        
        while(root!=NULL && root->val!=val){
            root=val<root->val?root->left:root->right;
        }
        return root;
    }