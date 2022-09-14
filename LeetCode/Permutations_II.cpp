//LeetCode Q.47. Permutations II

// Only logic part

class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        res.push_back(nums);
        //The function is next_permutation(a.begin(), a.end()). It returns ‘true’ if the function 
        //could rearrange the object as a lexicographically greater permutation. Otherwise, the function returns ‘false’.
        while (next_permutation(nums.begin(), nums.end())) {
            res.push_back(nums);
        }
        return res;
    }
};