//Leetcode Q.739. Daily Temperatures

//only logic part

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        vector<int> ans(T.size());
        stack<int> stk;
        
        for(int i = T.size()-1; i >= 0; i--){
            while(!stk.empty() && T[stk.top()] <= T[i]){
                stk.pop();
            }
            ans[i] = stk.empty()?0:stk.top()-i;
            stk.push(i);
        }
        return ans;
    }
};