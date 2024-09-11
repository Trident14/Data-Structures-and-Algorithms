#include<iostream>
using namespace std;

class Node{
    public :
    int val,height;
    Node* left;
    Node* right;
    
    Node(int key){
        val=key;
        height=1;
        left=NULL;
        right=NULL;
    }
};

class AVL{
    Node* root;
    
    int height(Node* node){
        if(node==NULL) return 0;
        return node->height;
    }
    
    int getBalanceFactor(Node* node){
        if(node==NULL) return 0;
        return height(node->right) - height(node->left);
    }
    
    Node* rightRotate(Node* y){
        Node* x=y->left;
        Node* temp=x->right;
        
        x->right=y;
        y->left=temp;
        
        x->height=max(height(x->right),height(x->left))+1;
        y->height=max(height(y->right),height(y->left))+1;
        
        return x;
    }
    
    Node* leftRotate(Node* y){
        Node* x=y->right;
        Node* temp=x->left;
        
        x->left=y;
        y->right=temp;
        
        x->height=max(height(x->right),height(x->left))+1;
        y->height=max(height(y->right),height(y->left))+1;
        
        return x;
        
    }
    Node* insert(Node*r , int val){
        if(r==NULL) return new Node(val);
        
        if(r->val<val){
            r->right=insert(r->right,val);
        }else if(r->val>val){
            r->left=insert(r->left,val);
        }else{
            return r;
        }
        
        r->height=1+max(height(r->left),height(r->right));
        int balance = getBalanceFactor(r);
        
       // Left Left Case
        if (balance < -1 && val < r->left->val)
            return rightRotate(r);

        // Right Right Case
        if (balance > 1 && val > r->right->val)
            return leftRotate(r);

        // Left Right Case
        if (balance < -1 && val > r->left->val) {
            r->left = leftRotate(r->left);
            return rightRotate(r);
        }

        // Right Left Case
        if (balance > 1 && val < r->right->val) {
            r->right = rightRotate(r->right);
            return leftRotate(r);
        }

        return r;
    }
    
public:
    AVL() : root(nullptr) {}

    void insert(int key) {
        root = insert(root, key);
    }

    void inOrder(Node* root) {
        if (root != nullptr) {
            inOrder(root->left);
            cout << root->val << " ";
            inOrder(root->right);
        }
    }

    void printInOrder() {
        inOrder(root);
        cout << endl;
    }
};
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
        freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
     AVL tree;

    tree.insert(10);
    tree.insert(20);
    tree.insert(30);
    tree.insert(40);
    tree.insert(50);
    tree.insert(25);

    cout << "In-order traversal of the constructed AVL tree is: ";
    tree.printInOrder();

}