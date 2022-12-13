//LeetCode Q.931. Minimum Falling Path Sum

//only logic part

class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& A) {
        int m = A.size();
        if(m == 0) return 0;

        int n = A[0].size();
        vector<vector<int>> dp(m, vector<int>(n, INT_MAX));

        dp[0] = A[0];
        for(int i = 1; i < m; i ++)
            for(int j = 0; j < n; j ++)
                for(int k = max(j - 1, 0); k <= min(n - 1, j + 1); k ++)
                    dp[i][j] = min(dp[i][j], dp[i - 1][k] + A[i][j]);

        return *min_element(dp[m - 1].begin(), dp[m - 1].end());
    }
};