//LeetCode Q.334. Increasing Triplet Subsequence

//only logic part

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int num1 = INT_MAX, num2 = INT_MAX;
        for (auto num : nums) {
            if (num <= num1) { 
                num1 = num;
            } else if (num <= num2) {
                num2 = num;
            } else {
                return true;
            }
        }
        return false;
    }
};