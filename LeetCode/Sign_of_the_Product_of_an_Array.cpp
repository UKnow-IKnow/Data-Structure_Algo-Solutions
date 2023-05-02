//Leetcode Q.1822. Sign of the Product of an Array

//only logic part

class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1;
        for (int v : nums) {
            if (!v) return 0;
            if (v < 0) ans *= -1;
        }
        return ans; 
    }
};