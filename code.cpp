void markParent(TreeNode* root,unordered_map<TreeNode* ,TreeNode* >parent_track){
    if(root==NULL) return;
    queue<TreeNode* >q;
    q.push(root);
    while(!q.empty()){
        TreeNode*  t=q.front();
        q.pop();
        if(t->left) {
            parent_track[t->left]=t;
            q.push(t->left);
        }
        if(t->right){
            parent_track[t->right]=t;
            q.push(t->right);
        }  
    }
}
vector<TreeNode* > printNodesAtDistanceK(TreeNode*  root, TreeNode*  target, int K) {
     unordered_map<TreeNode* ,TreeNode* >parent_track;
     markParent(root,parent_track);
     queue<TreeNode* >q1;
     unordered_map<TreeNode* ,bool>vis;
     q1.push(target);
    vis[target]=true;
    int cur=0;
    while(!q1.empty()){
        int len=q1.size();
        if(cur++==k) break;
        for(int i=0;i<len;i++){
            TreeNode*  it=q1.front();
            q1.pop();
            
            if(it->left && !vis[it->left]){
                q1.push(it->left);
                vis[it->left]=true;
            }
            
             if(it->right && !vis[it->right]){
                q1.push(it->right);
                vis[it->right]=true;
            }
            
            if(parent_track[it] && !vis[parent_track[it]]){
                q1.push(parent_track[it]);
                vis[parent_track[it]]=true;
            }
        }
    }
    vector<int>res;
    while(!q1.empty()){
        TreeNode*  temp=q1.front();
        q1.pop();
        res.push_back(temp->data);
    }
    return res;
}