//LeetCode Q.967. Numbers With Same Consecutive Differences

//only logic part

class Solution {
public:
    void solve(int val, int n, int k, int curr, vector<int> &ans){
        if(val < 0 || val > 9)
            return;
        
        curr = curr*10 + val;
        if(n == 1){
            ans.push_back(curr);
            return;
        }
        
        solve(val+k, n-1, k, curr, ans);
        if(k != 0)
            solve(val-k, n-1, k, curr, ans);
    }
    
public:
    vector<int> numsSameConsecDiff(int n, int k) {
        vector<int> ans;
        
        for(int i = 1; i<10; i++){
            solve(i, n, k, 0, ans);
        }
        
        return ans;
    }
};