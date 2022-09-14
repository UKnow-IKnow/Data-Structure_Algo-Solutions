//LeetCode Q.105. Construct Binary Tree from Preorder and Inorder Traversal

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
    TreeNode* buildTree(vector<int>& p, vector<int>& q) {
        if(p.size()==0) 
            return NULL;
        else if(p.size()==1) 
            return new TreeNode(p[0]);
        TreeNode* x= new TreeNode(p[0]);
        vector<int> v1,v2,v3,v4;
        int i=0;
        while(i<q.size()&&q[i]!=p[0]) 
            v3.push_back(q[i]),v1.push_back(p[i+1]),i++;;
        i++;
        while(i<q.size()) v4.push_back(q[i]),v2.push_back(p[i]),i++;
        x->left = buildTree(v1,v3);
        x->right = buildTree(v2,v4);
        return x;
    }
};