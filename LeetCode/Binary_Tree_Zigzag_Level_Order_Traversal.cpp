//Leetcode Q.103. Binary Tree Zigzag Level Order Traversal

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
    void dfs(TreeNode* cur, int level, vector<vector<int>>& ans){
        if(!cur) return;
        
        if(ans.size() == level){
            ans.push_back(vector<int>());
        }
        if(!(level&1)){
            ans[level].push_back(cur->val);
        }else{
            ans[level].insert(ans[level].begin(), cur->val);
        }
        
        dfs(cur->left, level+1, ans);
        dfs(cur->right, level+1, ans);
    };
    
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        
        dfs(root, 0, ans);
        
        return ans;
    }
};