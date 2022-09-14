//LeetCode Q.561. Array Partition I

//Logic Part

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0;
        for(int i=0;i<nums.size();i+=2) 
            ans += nums[i];
        return ans;
    }
};