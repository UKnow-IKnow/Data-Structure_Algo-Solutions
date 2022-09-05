//LeetCode Q.429. N-ary Tree Level Order Traversal

//only logic part

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        if(!root) return ans;
        queue<Node* > q;
        q.push(root);

        while(!q.empty()){
            vector<int> lvl;
            int n=q.size();
            for(int i=0;i<n;i++){
                Node* temp=q.front();
                q.pop();
                for(int i=0;i<temp->children.size();i++){
                    q.push(temp->children[i]);
                }
                lvl.push_back(temp->val);
            }
            ans.push_back(lvl);
        }
        
        return ans;
    }
};