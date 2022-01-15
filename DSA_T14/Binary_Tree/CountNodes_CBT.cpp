int countNodes(TreeNode* root) {
        int l=LeftHeight(root);
        int r=RightHeight(root);
		/* if height of left subtree is equal to right subtree then 
		   using formula 2^(height) -1 to calculate number
		   of nodes in a complete binary tree*/
        if(l==r) return (1<<l)-1;
        return 1+countNodes(root->left)+countNodes(root->right);
    }
// to calculate height	
 int Leftheight(TreeNode* root){
       int cnt=0;
        while(root){
            cnt++;
            root=root->left;
        }
        return cnt;
    }
    int Rightheight(TreeNode* root){
      int cnt=0;
      while(root){
        cnt++;
        root=root->right;
        }
        return cnt;
    }