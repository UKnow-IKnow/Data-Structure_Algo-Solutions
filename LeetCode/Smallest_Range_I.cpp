// LeetCode Q.908. Smallest Range I

//Only Logic Part

class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int min=INT_MAX;
        int max=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max)
                max=nums[i];
            if(nums[i]<min)
                min=nums[i];
        }
        
        int avg=(min+max)/2;
        
        if(min+k<=avg){
            min=min+k;
            max=max-k;
            return abs(min-max);
        }
        else{
            return 0;
        }  
    }
};