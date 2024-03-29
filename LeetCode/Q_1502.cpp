//Leetcode Q1502. Can Make Arithmetic Progression From Sequence

//only logic part

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        int n = arr.size();
        if(n <= 2) return true;
        
        sort(arr.begin(), arr.end());
        
        int diff = arr[1] - arr[0];
        
        for(int i = 1; i+1 < n; ++i){
            if(arr[i+1] - arr[i] != diff){
                return false;
            }
        }
        
        return true;
    }
};

