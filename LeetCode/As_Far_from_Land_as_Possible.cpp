//leetcode Q.1162. As Far from Land as Possible

//only logic part

class Solution {
public:
    int calDist(int x, int y, vector<pair<int, int>>& land){
        int mini=INT_MAX;
        for(auto &it:land){
            mini = min(mini, abs(x-it.first) + abs(y-it.second));
        }
        return mini;
    }

    int maxDistance(vector<vector<int>>& grid) {
        int r=grid.size(), c=grid[0].size();
        vector<pair<int, int>> water, land;

        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(grid[i][j]==0)
                    water.push_back(make_pair(i, j));
                else
                    land.push_back(make_pair(i, j));
            }
        }
        if(water.size()==0 || land.size()==0) return -1;
        
        int maxi=0;
        for(auto &it: water){
            maxi = max(maxi, calDist(it.first, it.second, land));
        }
        return maxi;    
    }    
};