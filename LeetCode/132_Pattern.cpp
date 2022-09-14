//LeetCode Q.456. 132 Pattern

// Only logic part

class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int min = INT_MIN;
        int n = nums.size();
        stack<int>s;
        for(int i = n-1;i>=0;i--){
            if(nums[i]<min)
                return true;
            else{
                while(!s.empty() && nums[i]>s.top()){
                    min = s.top();
                    s.pop();
                }
            }
            s.push(nums[i]);
        }
        return false;
    }
};