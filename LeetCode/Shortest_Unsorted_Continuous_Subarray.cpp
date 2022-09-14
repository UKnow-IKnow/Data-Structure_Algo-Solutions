//LeetCode Q.581. Shortest Unsorted Continuous Subarray

//Only Logic Part:

class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> check(nums.begin(),nums.end());
        sort(check.begin(),check.end());
        int n = nums.size();
        int s = 0 , e = n-1;
        
        while(s<n && nums[s] == check[s]){
            s++;
        }
        while(e>s && nums[e] == check[e]){
            e--;
        }
        return e+1-s;
    }
};