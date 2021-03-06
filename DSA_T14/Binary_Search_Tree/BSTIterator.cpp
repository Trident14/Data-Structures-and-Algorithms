/*follow up is for before() this can be done by 
    pushing right childs into stack
    i.e right root left */
class BSTIterator {
private:
    stack<TreeNode*>s;
    void PushAll(TreeNode* r){
        while(r!=NULL){
            s.push(r);
            r=r->left;
        }
    }
public:
    BSTIterator(TreeNode* root) {
        PushAll(root);
    }
    
    int next() {
        auto it=s.top();
        s.pop();
        PushAll(it->right);
        return it->val;
    }
    
    bool hasNext() {
        return !s.empty();
    }
};
