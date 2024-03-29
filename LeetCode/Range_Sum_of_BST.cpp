//Leetcode Q.938. Range Sum of BST

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
    int rangeSumBST(TreeNode* root, int L, int R) {
       int sum = 0;
        std::stack<TreeNode*> stack = std::stack<TreeNode*>();
        stack.push(root);
        
        while(!stack.empty()){
            TreeNode* node = stack.top();
            stack.pop(); 
            
            if(node->val >= L && node->val <= R){
                sum+=node->val;
            }
          
            if(node->left && node->val >= L){
                stack.push(node->left);
            }
            
            if(node->right && node->val <= R){
                stack.push(node->right);
            }
        }
        return sum;
    }
};