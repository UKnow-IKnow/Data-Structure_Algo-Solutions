//LeetCode Q.55. Jump Game

//Onlu Logic Part

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int index=0;
        int n=nums.size();
	    for(int i=0;i<n;i++){
            if(i>index) return false;
      
            index=max(index,i+nums[i]);
      
            if(i>=n-1) return true;
        }
    return true;
    }
};