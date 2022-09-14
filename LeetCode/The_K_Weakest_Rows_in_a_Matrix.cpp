//LeetCodeQ.1337. The K Weakest Rows in a Matrix

//Only logic part:

class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int, int>> sol(mat.size());
        vector<int> ans;
        
        for(auto i=0; i<mat.size(); i++) {
            auto count = 0;
            for(auto j = 0; j<mat[0].size(); j++) {
                if(mat[i][j] == 1)
                    count++;
                else
                    break;
            }
            sol[i] = make_pair(count, i);
        }
        
        sort(sol.begin(), sol.end());
        
        for(int i=0; i<k; i++)
            ans.push_back(sol[i].second);
        
        return ans;
    }
};