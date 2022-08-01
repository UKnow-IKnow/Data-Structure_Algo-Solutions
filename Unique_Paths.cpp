// LeetCode Q.62. Unique Paths

//Only Logic part

class Solution {
public:
    int uniquePaths(int m, int n) {
        int N=m+n-2;
        int R=min(m-1,n-1);
        
        double ans=1;
        
        for(int i=1;i<=R;++i)
            ans = ans*(N--)/i;
        
        return (int)ans;
    }
};