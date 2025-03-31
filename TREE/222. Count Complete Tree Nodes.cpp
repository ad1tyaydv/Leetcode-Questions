class Solution {
public:

    void countBT(TreeNode* root, int &count) {

        if(!root)  return;

        countBT(root->left, count);
        count++;
        countBT(root->right, count);
    }

    int countNodes(TreeNode* root) {
        
        int count = 0;
        countBT(root, count);
        return count;
    }
};

-----------------------------------------------------------------------------------------------------------------------------

// USING RECURSION

class Solution {
public:

    int countNodes(TreeNode* root) {

        if(!root) return 0;

    return {1 + countNodes(root->left) + countNodes(root->right)};
    }
};
