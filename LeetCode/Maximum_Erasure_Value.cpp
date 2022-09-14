//LeetCode Q.1695. Maximum Erasure Value

//only logic part

class Solution {
public:
    int count[10001];
    int maximumUniqueSubarray(vector<int>& nums) {
        int left = 0, right = 0, ans = 0, sum = 0;
        while(right < nums.size()){
            count[nums[right]]++;
            sum = sum + nums[right];
            
            while(count[nums[right]] > 1){
                sum = sum - nums[left];
                count[nums[left]]--;
                left++;
            }
            ans = max(ans, sum);
            right++;
        }
        return ans;
    }
};