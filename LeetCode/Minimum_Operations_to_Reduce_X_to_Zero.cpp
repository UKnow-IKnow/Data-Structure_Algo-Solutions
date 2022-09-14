//LeetCode Q.1658. Minimum Operations to Reduce X to Zero

//Onlu Logic Paart
//Sliding Window

class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int sum=0;
        for(int i:nums)
            sum+=i;
        sum=sum-x;
        if(sum==0)
            return nums.size();
        if(sum<0)
            return -1;
        int low=0;int high=0;int cursum=0;
        int ans=-1;
		
        while(high<nums.size()){
            cursum+=nums[high];
            while(cursum>sum){
                cursum-=nums[low++];
            }
            if(cursum==sum)
                ans=max(ans,high-low+1);
            high++;
        }
        if(ans==-1)
            return -1;
        return nums.size()-ans;
    }
};