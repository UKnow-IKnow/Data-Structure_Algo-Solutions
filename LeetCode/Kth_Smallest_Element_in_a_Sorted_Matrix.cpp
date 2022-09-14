//LeetCode Q.378. Kth Smallest Element in a Sorted Matrix

//Only logic part (Binary Search)

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        int l = matrix[0][0],r = matrix[n-1][n-1],ans = 0;
        while(l <= r){
            int mid = (l+r)/2;
            int count = 0;
            for(int i = 0;i < n;i++){
                auto it = upper_bound(matrix[i].begin(), matrix[i].end(), mid); 
                count += (it - matrix[i].begin());
            }
            if(count >= k){ 
                ans = mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        return ans;
    }
};