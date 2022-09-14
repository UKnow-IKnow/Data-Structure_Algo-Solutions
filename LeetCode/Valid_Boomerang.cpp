// LeetCode Q.1037. Valid Boomerang

// Only Logic Part

class Solution {
public:
    bool isBoomerang(vector<vector<int>>& po) {
        int n = po[1][0]*po[2][1] - po[2][0]*po[1][1];
        int sub = po[0][0]*po[2][1] - po[0][1]*po[2][0];
        int k = po[0][0]*po[1][1] - po[1][0]*po[0][1];
    
        if( (n-sub+k) == 0 )
            return false ;
    
        return true ;
    }
};