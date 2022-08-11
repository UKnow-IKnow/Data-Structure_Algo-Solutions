// LeetCode Q.98. Validate Binary Search Tree

// only logic part

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
class Solution
{
public:
    void chk(TreeNode *root, vector<int> &ans){
        if (root == NULL)
            return;
        chk(root->left, ans);
        ans.push_back(root->val);
        chk(root->right, ans);
    }
    bool isValidBST(TreeNode *root){
        vector<int> ans;
        chk(root, ans);
        for (int i = 1; i < ans.size(); i++){
            if (ans[i] <= ans[i - 1]){
                return false;
            }
        }
        return true;
    }
};