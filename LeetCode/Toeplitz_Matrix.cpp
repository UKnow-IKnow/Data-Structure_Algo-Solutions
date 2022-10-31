//Leetcode Q.766. Toeplitz Matrix

//only logic part

class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int M = matrix.size();
        if(M==0||M==1) 
            return true;
        int N = matrix[0].size();

        for(int i=0;i<M-1;i++){
            for(int j=0;j<N-1;j++){
                if(matrix[i][j] != matrix[i+1][j+1])
                    return false;
            }
        }
        return true;
    }
};