//LeetCode Q.1770. Maximum Score from Performing Multiplication Operations

//only logic part

class Solution {
public:
    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
        vector<int> curr(multipliers.size() + 1, 0), next(multipliers.size() + 1, 0);
        
        for(int i = multipliers.size()-1 ; i>=0 ; i-- ){
            cout<<i<<endl;
            for(int j = i ; j >= 0 ; j--){
                int op1 = nums[j] * multipliers[i] + next[j+1] ;
                int op2 = nums[nums.size() - (i - j) - 1] * multipliers[i] + next[j];
               
                curr[j] = max(op1 , op2);
            }
            next  = curr;
        }
        return curr[0];
        
    }
};