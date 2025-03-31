class Solution {
public:

    void BinaryTree(TreeNode* root, vector<int>& result) {

        if(root == NULL) {
            return;
        }

        BinaryTree(root->left, result);
        BinaryTree(root->right, result);
        result.push_back(root->val);
    }

    vector<int> postorderTraversal(TreeNode* root) {
        
        vector<int> result;
        BinaryTree(root, result);
        return result;
    }
};
