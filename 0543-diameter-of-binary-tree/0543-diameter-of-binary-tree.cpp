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
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int maxDiameter = 0;
        Height(root, maxDiameter);
        return maxDiameter;
    }
    int Height(TreeNode* node, int& maxDiameter){
        if (node==nullptr){
            return 0;
        }
        int left=Height(node->left, maxDiameter);
        int right=Height(node->right, maxDiameter);
        maxDiameter = max(maxDiameter, left + right);
        return 1 + max(left, right);

    }
    
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna