//LeetCode Q.89. Gray Code

//Only Logic Part

class Solution {
public:
    vector<int> grayCode(int n) {
        int size = 1 << n;
        vector<int> result(size);
        for(int i = 0; i < size; ++i){
            result[i] = i;
        }
        
        for(int i = 2; i < size; i*=2) {
            for(int j = i; j < size; j += i*2)
                reverse(result.begin() + j, result.begin() + j + i);            
        }
        return result;
    }
};