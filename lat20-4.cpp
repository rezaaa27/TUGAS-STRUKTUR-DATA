#include <iostream>
using namespace std;

// Struktur node
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Membuat node baru
Node* newNode(int value) {
    Node* node = new Node();
    node->data = value;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// Preorder Traversal (Root - Left - Right)
void preorder(Node* root) {
    if (root != NULL) {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

// Inorder Traversal (Left - Root - Right)
void inorder(Node* root) {
    if (root != NULL) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

// Postorder Traversal (Left - Right - Root)
void postorder(Node* root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}

int main() {
    // Membangun tree
    Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    cout << "Preorder Traversal  : ";
    preorder(root);
    cout << endl;

    cout << "Inorder Traversal   : ";
    inorder(root);
    cout << endl;

    cout << "Postorder Traversal : ";
    postorder(root);
    cout << endl;

    return 0;
}

