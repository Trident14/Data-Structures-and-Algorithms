/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
private:
    void make_parent(TreeNode* root,unordered_map<TreeNode*,TreeNode*>&mp){
        if(root==NULL) return;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode* it=q.front();
            q.pop();
            
            if(it->left){
                mp[it->left]=it;
                q.push(it->left);
            }
            
            if(it->right){
                mp[it->right]=it;
                q.push(it->right);
            }
        }
    }
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*,TreeNode*>mp;
        make_parent(root,mp);
        queue<TreeNode*>q;
        unordered_map<TreeNode*,bool>vis;
        q.push(target);
        int cnt=0;
        vis[target]=true;
        while(!q.empty()){
            int size=q.size();
            if(cnt++==k) break;
            for(int i=0;i<size;i++){
                TreeNode* t=q.front();
                q.pop();
                
                if(t->left && !vis[t->left]) {
                    q.push(t->left);
                    vis[t->left]=true;
                }
                if(t->right && !vis[t->right]) {
                    q.push(t->right);
                    vis[t->right]=true;
                }
                
                if(mp[t] && !vis[mp[t]]){
                    q.push(mp[t]);
                    vis[mp[t]]=true;
                }
            }
        }
        vector<int>res;
        while(!q.empty()){
            res.push_back(q.front()->val);
            q.pop();
        }
        return res;
    }
};