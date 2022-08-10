//LeetCode Q.108. Convert Sorted Array to Binary Search Tree

//only solution part

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
    TreeNode *help(vector<int> &nums, int i, int j){
        if(i >= j) return NULL;
        int mid = i + (j - i) / 2;
        TreeNode *root = new TreeNode(nums[mid]);
        root -> left = help(nums, i, mid);
        root -> right = help(nums, mid + 1, j);
        return root;
    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return help(nums, 0, nums.size());
    }
};