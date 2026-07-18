/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    int min_diff = INT_MAX;
    TreeNode* prev = nullptr;

    void inorder(TreeNode* root) {
        if (root == nullptr) return;
        inorder(root->left);
        if (prev != nullptr) {
            min_diff = min(min_diff, root->val - prev->val);
        }
        prev = root;
        inorder(root->right);
    }
public:
    int minDiffInBST(TreeNode* root) {
        inorder(root);
        return min_diff;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna