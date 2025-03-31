class Solution {
public:

    void BinaryTree(TreeNode* root, vector<int> &result) {
        
        if(root == NULL) {
            return;
        }

        BinaryTree(root->left, result);
        result.push_back(root->val);
        BinaryTree(root->right, result);
    }

    vector<int> inorderTraversal(TreeNode* root) {

        vector<int> result;

        BinaryTree(root, result);
        return result;
    }
};
