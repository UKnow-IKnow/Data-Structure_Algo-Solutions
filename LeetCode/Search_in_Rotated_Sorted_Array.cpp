//Leetcode Q.33. Search in Rotated Sorted Array

//only logic part

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int leftIdx = 0;
        int rightIdx = nums.size() - 1;
        
        while (leftIdx <= rightIdx) {
            int midIdx = (leftIdx + rightIdx) / 2;
            if (nums[midIdx] == target) {
                return midIdx;
            }
            if (nums[leftIdx] <= nums[midIdx]) {
                if (target >= nums[leftIdx] && target < nums[midIdx]) {
                    rightIdx = midIdx - 1;
                } else {
                    leftIdx = midIdx + 1;
                }
            } else { 
                if (target > nums[midIdx] && target <= nums[rightIdx]) {
                    leftIdx = midIdx + 1;
                } else {
                    rightIdx = midIdx - 1;
                }
            }
        }
        return -1;
    }
};