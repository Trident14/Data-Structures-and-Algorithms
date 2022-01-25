class Solution {
public:
    void flatten(TreeNode* root) {
        if(root==NULL) return;
      stack<TreeNode*>st;
        st.push(root);
        while(!st.empty()){
            TreeNode* it=st.top();
            st.pop();
            if(it->right) st.push(it->right);
            if(it->left) st.push(it->left);
            
            if(!st.empty()){
                it->right=st.top();
                it->left=NULL;
            }
        }
    }
};