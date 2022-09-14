//LeetCode Q.118. Pascal's Triangle

//only logic part

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if(numRows == 1) return {{1}};
        else if(numRows == 2) return {{1}, {1,1}};
        vector<vector<int>> res = {{1}, {1,1}};
        for(int i=2;i<numRows;i++){
            vector<int> temp(i+1);
            for(int j=0;j<=i;j++){
                if(j==0 || j == i){
                    temp[j] = 1;
                }
                else{
                    temp[j] = res[i-1][j-1] + res[i-1][j]; 
                }
            }
            res.push_back(temp);
        }
        return res;
    }
};