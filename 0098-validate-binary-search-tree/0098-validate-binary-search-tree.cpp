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
    bool isValid(TreeNode* node,TreeNode* min,TreeNode* max){
        if (node==nullptr){
            return true;
        }
        if (min!=nullptr && node->val <=min->val){
            return false;
        }
        if (max!=nullptr && node->val >=max->val){
            return false;
        }
        return isValid(node->left,min,node) && 
        isValid(node->right,node,max) ;
    }

    bool isValidBST(TreeNode* root) {
        return isValid(root,nullptr,nullptr);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna