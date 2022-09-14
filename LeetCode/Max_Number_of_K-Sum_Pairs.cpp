//LeetCode Q.1679. Max Number of K-Sum Pairs

//Only Logic part

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int start = 0 , end = nums.size()-1;
        auto ans = 0;
        while(start < end){
            if(nums[start] + nums[end] == k){
                ans++;
                start++;
                end--;
            }
            else if(nums[start] + nums[end] < k){
                start++;
            }
            else{
                end--;
            }
        }
        return ans;
    }
};