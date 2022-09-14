//LeetCode Q.215. Kth Largest Element in an Array

//Only logic part

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end(),greater());
        return nums[k-1];
    }
};