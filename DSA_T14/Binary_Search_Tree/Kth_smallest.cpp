int kthSmallest(TreeNode* root, int k) {
        stack<TreeNode*> st; 
        TreeNode* node = root;
        int cnt = 0; 
        while(true) {
            if(node != NULL) {
                st.push(node); 
                node = node->left; 
            }
            else {
    
                if(st.empty() == true) break; 
                node = st.top(); 
                st.pop(); 
                
                cnt++; 
                if(cnt == k) return node->val; 
                node = node->right; 
            }  
        }
        return -1;
    }

class Solution {
private:
    void helper(TreeNode* root,int k,vector<int>&ans){
        if(root==NULL) return;
    
        helper(root->left,k,ans);
        cout<<root->val<<" ";
        ans.push_back(root->val);
        helper(root->right,k,ans);
        
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        vector<int>ans;
        helper(root,k,ans);
        //sort(ans.begin(),ans.end());
        return ans[k-1];
    }
};