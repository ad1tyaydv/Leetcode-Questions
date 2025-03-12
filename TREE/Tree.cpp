#include <bits/stdc++.h>

using namespace std;

class Node {
    public:
    int data;
    Node* right, *left;

    Node(int value) {
        data = value;
        right = left = NULL;
    }
};

Node* binarytree() {
    int x;
    cin>>x;

    if(x == -1) {
        return NULL;
    }

    Node* temp = new Node(x);

    // CREATE LEFT SIDE
    temp->left = binarytree();

    // CREATE RIGHT SIDE
    temp->right = binarytree();

    return temp;
}

void preorder(Node* root) {

    if(root == NULL) {
        return;
    }

    cout<<root->data;
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node* root) {

    if(root == NULL) {
        return;
    }

    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
}

void postorder(Node* root) {

    if(root == NULL) {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->data;
}

int main() {
    
    cout<<"ENTER THE ROOT NDOE: ";
    Node* root;
    root = binarytree();

    cout<<"PREORDER: ";
    preorder(root);
    cout<<endl;
    
    cout<<"INORDER: ";
    inorder(root);
    cout<<endl;

    cout<<"POSTORDER: ";
    postorder(root);
}
