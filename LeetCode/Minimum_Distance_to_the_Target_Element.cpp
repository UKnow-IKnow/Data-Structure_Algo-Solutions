//LeetCode Q.1848. Minimum Distance to the Target Element

// Only logic part

class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int n=nums.size(),ans=INT_MAX;
        for(int i=0;i<n;i++)
            if(nums[i]==target)     
                ans = min(ans, abs(start-i));
        return ans;
    }
};