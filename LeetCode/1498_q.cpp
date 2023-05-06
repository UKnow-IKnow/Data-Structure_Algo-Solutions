//Leetcode Q.1498. Number of Subsequences That Satisfy the Given Sum Condition

//only logic part

class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        int n = nums.size();
        int MOD = 1e9+7;
        int ans = 0;
        vector<int> power(n, 1);
        
        for(int i = 1; i < n; ++i){
            power[i] = (power[i-1] << 1) % MOD;
        }
        
        sort(nums.begin(), nums.end());
        
        for(int l = 0, r = n-1; l <= r; ){
            if(nums[l] + nums[r] > target){
                --r;
            }else{
                ans = (ans + power[r-l]) % MOD;
                ++l;
            }
        }
        return ans;
    }
};