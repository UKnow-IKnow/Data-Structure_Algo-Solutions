//LeetCode Q.124. Binary Tree Maximum Path Sum

//only logic part

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
    int ans;
    int maxPathDown(TreeNode* node){
        if(!node) return 0;
        int left = max(maxPathDown(node->left), 0);
        int right = max(maxPathDown(node->right), 0);
        ans = max(ans, left+right+node->val);
        return node->val + max(left, right);
    };
    int maxPathSum(TreeNode* root) {
        ans = INT_MIN;
        maxPathDown(root);
        return ans;
    }
};