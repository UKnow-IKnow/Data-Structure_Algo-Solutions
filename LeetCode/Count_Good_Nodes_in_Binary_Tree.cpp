//LeetCode Q.1448. Count Good Nodes in Binary Tree

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
    int goodNodes(TreeNode* root) {
        return goodNodes(root, numeric_limits<int>::min());
    }
    
    int goodNodes(TreeNode* node, int mx) {
        if (!node) return 0;
        
        int ans = node->val >= mx;
        mx = max(mx, node->val);
        
        ans += goodNodes(node->left, mx);
        ans += goodNodes(node->right, mx);
        
        return ans;
    }
};