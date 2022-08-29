//LeetCode Q.200. Number of Islands

//only logic part

class Solution {
public:
   int numIslands(vector<vector<char>>& grid) {
        int res=0;
        for(int i=0;i<grid.size();i++)
            for(int j=0;j<grid[i].size();j++)
                if(grid[i][j]=='1')
                {
                    dfs(grid,i,j);
                    res++;
                }
        return res;
    }
    void dfs(vector<vector<char>>& v,int i,int j)
    {
        if(i<0 || j<0 || i>=v.size() || j>=v[0].size() || v[i][j]=='0')
            return;
        
        v[i][j]='0';
        dfs(v,i-1,j);
        dfs(v,i+1,j);
        dfs(v,i,j-1);
        dfs(v,i,j+1);
    }
};