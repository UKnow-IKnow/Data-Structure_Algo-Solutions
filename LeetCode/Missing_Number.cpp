//LeetCode Q.268. Missing Number

// only logic part

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        auto n = nums.size();
        auto sum = n*(n+1)/2;
        auto sum2 = 0;
        for(auto num : nums){
            sum2 = sum2 + num;
        }
        
        return sum - sum2;
    }
};