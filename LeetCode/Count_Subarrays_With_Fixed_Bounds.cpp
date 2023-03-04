//Leetcode Q.2444. Count Subarrays With Fixed Bounds

//only logic part


class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long n=nums.size(),mni=-1,mxi=-1,li=-1,ans=0;
        for(int i=0;i<n;++i){
            if(nums[i]<minK || nums[i]>maxK) li=i,mni=-1,mxi=-1;
            else{
                if(nums[i]==minK) mni=i;
                if(nums[i]==maxK) mxi=i;
                if(mni!=-1 && mxi!=-1) ans+=min(mni,mxi)-li;
            }
        }
        return ans;
    }
};
