//Leetcode Q.852. Peak Index in a Mountain Array

//only logic part

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low = 0;
        int up = arr.size()-1;
        while(low < up){
            int mi = (low+up)/2;
            if(arr[mi] < arr[mi+1]){
                low = mi+1;
            }else{
                up = mi;
            }
        }
        return low;
    }
};