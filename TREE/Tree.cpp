#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Node {
    public:
    int data;
    Node* left, *right;

    Node(int value) {
        data = value;
        left = right = NULL;
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
        return ;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->data;
}

vector<int> levelorder(Node* root) {

    queue<Node*> q;
    q.push(root);
    vector<int> ans;
    Node* temp;

    while(!q.empty()) {
        temp = q.front();
        q.pop();

    ans.push_back(temp->data);

    if(temp->left)
    q.push(temp->left);

    if(temp->right)
    q.push(temp->right);
    }

    return ans;
}

int main() {
    cout<<"ENTER THE ROOT NODE: ";
    Node* root;
    root = binarytree();

    // PRE ORDER
    cout<<"PRE ORDER: ";
    preorder(root);
    cout<<endl;

    // IN ORDER
    cout<<"IN ORDER: ";
    inorder(root);
    cout<<endl;

    // POST ORDER
    cout<<"POST ORDER: ";
    postorder(root);
    cout<<endl;

    // LEVEL ORDER TRAVERSAL
    vector<int> result = levelorder(root);
    cout<<"LEVEL ORDER: ";

    for(int i=0;i<result.size();i++) {
        cout<<result[i];
    }
    cout<<endl;
}
