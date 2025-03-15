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

// PRE ORDER OF BINARY TREE
void preorder(Node* root) {
    if(root == NULL) {
        return;
    }

    cout<<root->data;
    preorder(root->left);
    preorder(root->right);
}

// IN ORDER OF BINARY TREE
void inorder(Node* root) {
    if(root == NULL) {
        return;
    }

    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
}

// POST ORDER OF BINARY TREE
void postorder(Node* root) {
    if(root == NULL) {
        return ;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->data;
}

// LEVEL ORDER OF BINARY TREE
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

// SIZE OF BINARY TREE
void total(Node* root, int &count) {
    if(root == NULL) {
        return;
    }
    
    count++;
    total(root->left, count);
    total(root->right, count);
}

int getsize1(Node* root) {

    int count = 0;
    total(root, count);
    return count;
}

int getsize2(Node* root) {

    if(root == NULL) {
        return 0;
    }

    return (1 + getsize2(root->left) + getsize2(root->right));
}

// SUM OF BINARY TREE
void total(Node* root, long long &sum) {
    if(root == NULL) {
        return;
    }

    sum += root->data;
    total(root->left, sum);
    total(root->right, sum);
}

long long sumBT1(Node* root) {
    long long sum = 0;
    total(root, sum);
    return sum;
}

long long sumBT2(Node* root) {
    if(!root) {
        return 0;
    }

    return (root->data + sumBT2(root->left) + sumBT2(root->right));
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

    // LEVEL ORDER
    vector<int> result = levelorder(root);

    cout<<"LEVEL ORDER: ";
    for(int i=0;i<result.size();i++) {
        cout<<result[i];
    }
    cout<<endl;

    // SIZE
    int size1 = getsize1(root);
    cout<<"SIZE: "<<size1;
    cout<<endl;

    int size2 = getsize2(root);
    cout<<"SIZE: "<<size2;
    cout<<endl;

    // SUM
    int sum1 = sumBT1(root);
    cout<<"SUM: "<<sum1;
    cout<<endl;

    int sum2 = sumBT2(root);
    cout<<"SUM: "<<sum2;
    cout<<endl;
}
