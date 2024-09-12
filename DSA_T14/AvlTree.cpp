#include <algorithm> // For std::max

struct Node {
    int data;
    Node *left;
    Node *right;
    int height;

    Node(int value) : data(value), left(nullptr), right(nullptr), height(1) {}
};

class Solution {
public:
    // Function to get the height of a node
    int height(Node* node) {
        return node ? node->height : 0;
    }

    // Function to get the balance factor of a node
    int getBalanceFactor(Node* node) {
        return node ? height(node->right) - height(node->left) : 0;
    }

    // Function to perform right rotation
    Node* rightRotate(Node* y) {
        Node* x = y->left;
        Node* T2 = x->right;

        // Perform rotation
        x->right = y;
        y->left = T2;

        // Update heights
        y->height = 1 + std::max(height(y->left), height(y->right));
        x->height = 1 + std::max(height(x->left), height(x->right));

        return x;
    }

    // Function to perform left rotation
    Node* leftRotate(Node* x) {
        Node* y = x->right;
        Node* T2 = y->left;

        // Perform rotation
        y->left = x;
        x->right = T2;

        // Update heights
        x->height = 1 + std::max(height(x->left), height(x->right));
        y->height = 1 + std::max(height(y->left), height(y->right));

        return y;
    }

    // Function to insert a node in the AVL tree and balance the tree
    Node* insertToAVL(Node* node, int data) {
        // Perform normal BST insert
        if (node == nullptr) return new Node(data);

        if (data < node->data) {
            node->left = insertToAVL(node->left, data);
        } else if (data > node->data) {
            node->right = insertToAVL(node->right, data);
        } else {
            // Duplicate keys are not allowed
            return node;
        }

        // Update height of this ancestor node
        node->height = 1 + std::max(height(node->left), height(node->right));

        // Get the balance factor of this ancestor node to check whether
        // this node became unbalanced
        int balance = getBalanceFactor(node);

        // If this node becomes unbalanced, then there are 4 cases

        // Left Left Case
        if (balance < -1 && data < node->left->data) {
            return rightRotate(node);
        }

        // Right Right Case
        if (balance > 1 && data > node->right->data) {
            return leftRotate(node);
        }

        // Left Right Case
        if (balance < -1 && data > node->left->data) {
            node->left = leftRotate(node->left);
            return rightRotate(node);
        }

        // Right Left Case
        if (balance > 1 && data < node->right->data) {
            node->right = rightRotate(node->right);
            return leftRotate(node);
        }

        // Return the (unchanged) node pointer
        return node;
    }
};
