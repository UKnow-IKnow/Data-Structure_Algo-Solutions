//Leetcode Q.2090. K Radius Subarray Averages

//only logic part

class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        const int l = 2 * k + 1;
        int64_t total = 0;
        vector<int> result(size(nums), -1);
        for (int i = 0; i < size(nums); ++i) {
            total += nums[i];
            if (i - l >= 0) {
                total -= nums[i - l];
            }
            if (i >= l - 1) {
                result[i - k] = total / l;
            }
        }
        return result;
    }
};