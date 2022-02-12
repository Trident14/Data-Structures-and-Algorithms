//Optimal
class BSTIterator{
    private:
    stack<TreeNode*>s;
    bool flag=false;
    void pushAll(TreeNode* r){
        if(r==NULL) return;
        while(r!=NULL){
            s.push(r);
            if(flag) r=r->left;
            else{
                r=r->right;
            }
        }
    }
    public:
    BSTIterator(TreeNode* root, bool isReverse){
        flag=isReverse;
        pushAll(root);
    }
    int next(){
        auto it=s.top();
        s.pop();
        if(flag){
            pushAll(it->right);
        }else{
            pushAll(it->left);
        }
        return it->val;
    }
};
class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        BSTIterator l(root,true);
        BSTIterator r(root,false);
        int cnt=0;
        int i=l.next();
        int j=r.next();
        
        while(i<j){
            if(i+j==k){
               cnt++;
               i=l.next();
                
            }
            if(i+j<k){
                i=l.next();
            }else{
                j=r.next();
            }
        }
        cout<<cnt;
        return false;
    }
};

