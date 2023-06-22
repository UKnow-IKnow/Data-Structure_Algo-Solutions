//Leetcode Q.714. Best Time to Buy and Sell Stock with Transaction Fee

//only logic part

class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();
        vector<int> hold(n+1, INT_MIN), empty(n+1, 0);
        
        for(int i = 1; i <= n; i++){
            hold[i] = max(hold[i-1], empty[i-1]-prices[i-1]-fee);
            empty[i] = max(empty[i-1], hold[i-1]+prices[i-1]);
        }
        
        return max(hold[n], empty[n]);
    }
};