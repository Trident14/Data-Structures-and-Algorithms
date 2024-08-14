#include <iostream>
#include<vector>
using namespace std;
class Node{
public:
    int data;
    Node *left;
    Node *right;
    
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
    
};
void preorder(Node *r) {
    if(r==NULL) return;
    
    cout<<r->data<<" ";
    preorder(r->left);
    preorder(r->right);
}

void postorder(Node *r) {
    if(r==NULL) return;
    
    postorder(r->left);
    postorder(r->right);
    cout<<r->data<<" ";
}

void inorder(Node *r) {
    if(r==NULL) return;
    
    inorder(r->left);
    cout<<r->data<<" ";
    inorder(r->right);
}



int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
        freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
        
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    Node * root=new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left=new Node(4);
    root->left->right = new Node(5);
     root->right->left=new Node(6);
    root->right->right = new Node(7);
    
    cout<<"Preorder: ";
    preorder(root);
    cout<<endl;
    
    cout<<"Inorder: ";
    inorder(root);
    cout<<endl;
    
    cout<<"Postorder: ";
    postorder(root);
    cout<<endl;
    
    
    
    
   
    return 0;
}