//LeetCode Q.665. Non-decreasing Array

//Only logic part 

class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        if (nums.size() == 1) 
            return true;
        int cnt = 0;
        
        for (int i=0; i<nums.size()-1; i++) {
            if (nums[i] > nums[i+1]) {
                if (i == 0) 
                    nums[i] = nums[i+1];
                else {
                    if (nums[i-1] > nums[i+1]) 
                        nums[i+1] = nums[i];
                    else 
                        nums[i] = nums[i-1];
                }
                cnt++;
                if (cnt > 1) 
                    return false;
            }
        }
        return cnt <= 1;
    }
};