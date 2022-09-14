// LeetCode Q.448. Find All Numbers Disappeared in an Array

//Only Logic Part

//Brute force solution

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> f(n+1,0);
        vector<int> ans;
        for(int i = 0;i<n;i++){
        f[nums[i]]++;
        }
    
        for(int i = 1;i<=n;i++){
            if(f[i]==0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};