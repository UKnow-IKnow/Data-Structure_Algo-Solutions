//Leetcode Q.1187. Make Array Strictly Increasing

//only logic part

class Solution {
public:
    int makeArrayIncreasing(vector<int>& arr1, vector<int>& arr2) {
        sort(arr2.begin(),arr2.end());
        arr2.resize(unique(arr2.begin(),arr2.end())-arr2.begin());
        int n=arr1.size(),m=arr2.size();
        if(n==0) return 0;
       
        vector<vector<int>> dp(n,vector<int>(m+1,INT_MAX));
        dp[0][0]=arr1[0],dp[0][1]=arr2[0];
        for(int i=1;i<n;i++){
            if(arr1[i]>arr1[i-1]){
                dp[i][0]=arr1[i];
                if(i==n-1) return 0;
            }
            else break;
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr1[i]>dp[i-1][j+1])
                    dp[i][j+1]=arr1[i];
                auto ii=upper_bound(arr2.begin(),arr2.end(),dp[i-1][j]);
                if(ii!=arr2.end()){
                    dp[i][j+1]=min(dp[i][j+1],*ii);
                }
            }
        }
        for(int i=0;i<m+1;i++)
            if(dp[n-1][i]!=INT_MAX) return i;
        return -1;
    }
};