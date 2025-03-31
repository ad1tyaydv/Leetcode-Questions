class Solution {
public:

    void BinaryTree(TreeNode* root, vector<int>& result) {

        if(root == NULL) {
            return;
        }

        result.push_back(root->val);
        BinaryTree(root->left, result);
        BinaryTree(root->right, result);
    }

    vector<int> preorderTraversal(TreeNode* root) {

        vector<int> result;
        BinaryTree(root, result);
        return result;
    }
};
