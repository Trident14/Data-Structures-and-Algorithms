// O(NlogN)+O(N) Nlogn for sorting and n to create tree
class Solution {
private:
    TreeNode* Construct(vector<int>&preorder,int ps,int pe,vector<int>&inorder,int is,int                                                                           ie,unordered_map<int,int>&Imp){
        
        if(ps>pe || is>ie) return NULL;
        TreeNode* root=new TreeNode(preorder[ps]);
        int inRoot=Imp[root->val];
        int left=inRoot-is;
        root->left=Construct(preorder,ps+1,ps+left,inorder,is,inRoot-1,Imp);
        root->right=Construct(preorder,ps+left+1,pe,inorder,inRoot+1,ie,Imp);
        
        return root;
        
    }
   void helper(vector<int>&inorder, unordered_map<int,int>&Imp){
       for(int i=0;i<inorder.size();i++){
           Imp[inorder[i]]=i;;
       }
   }
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        vector<int>inorder=preorder;
        sort(inorder.begin(),inorder.end());
        unordered_map<int,int>Imp;
        helper(inorder,Imp);
        return Construct(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,Imp);
    }
};

