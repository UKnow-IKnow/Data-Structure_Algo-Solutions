//LeetCode Q.303. Range Sum Query - Immutable

//Only Logic part 

class NumArray {
 public:
    vector<int> arr;
    NumArray(vector<int>& nums) {
        int s=nums.size();
        arr = vector<int>(s+1);
        arr[0] = nums[0];
        for(int i=1;i<s;i++){
            arr[i]=nums[i]+arr[i-1];    
        }
    }    
    int sumRange(int left, int right) {
        if(left==0) 
            return arr[right];
        if(left==right){
            return arr[left]-arr[left-1];
        }

        return arr[right]-arr[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */