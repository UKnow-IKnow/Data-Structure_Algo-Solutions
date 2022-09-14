//LeetCode Q.35. Search Insert Position

//Only Logic Part

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        auto index = 0;
        for(auto i=0; i<nums.size(); i++){
            if(nums[i] == target){
                index = i;
                break;
            } 
            if(nums[i] < target){
                index = i+1;
            }
        }
    return index;
    }
};