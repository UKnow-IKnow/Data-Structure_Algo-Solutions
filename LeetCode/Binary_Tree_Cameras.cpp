//LeetCode Q.968. Binary Tree Cameras

//Only logic part

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
    int minCameraCover(TreeNode* root) {
        int cnt = 0;
        int ans = find(root,cnt);               
        if(ans==-1)
            cnt++;
        return cnt;
    }
    int find(TreeNode* root,int& cnt) {
        if(root == NULL)
            return 1;
        int left = find(root->left,cnt);
        int right = find(root->right,cnt);
        if(left==-1 or right==-1) {
            cnt++;
            return 0;
        }
        if(left==0 or right==0) {
            return 1;
        }
        return -1;
    }
};