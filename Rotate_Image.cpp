//LeetCode Q.48. Rotate Image

//only logic part

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {    
        for(int i=0;i<matrix.size();++i){
            for(int j=i+1;j<matrix.size();++j)
                swap(matrix[i][j],matrix[j][i]); 
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};