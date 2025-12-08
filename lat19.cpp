#include <iostream>
using namespace std;

struct Node {
    char data;
    Node* left;
    Node* right;
};

Node* newNode(char data) {
    Node* n = new Node();
    n->data = data;
    n->left = nullptr;
    n->right = nullptr;
    return n;
}

// Traversal
void preorder(Node* root) {
    if (root) {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(Node* root) {
    if (root) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

void postorder(Node* root) {
    if (root) {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}

int main() {
   
    Node* R = newNode('R');
    Node* A = newNode('A');
    Node* S = newNode('S');
    Node* I = newNode('I');
    Node* T = newNode('T');
    Node* E = newNode('E');

    // Menyusun pohon
    R->left = A;
    R->right = E;

    A->left = S;

    S->left = I;
    S->right = T;

    // Output
    cout << "Tampilan secara PreOrder  : ";
    preorder(R);

    cout << "\nTampilan secara InOrder   : ";
    inorder(R);

    cout << "\nTampilan secara PostOrder : ";
    postorder(R);

    return 0;
}

