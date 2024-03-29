//LeetCode Q.1926. Nearest Exit from Entrance in Maze

//only logic part

class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& ent) {
        vector<pair<int,int>> dir = {
            {0,1},{1,0},{0,-1},{-1,0}
        };
        
        queue<array<int,3>> q;
        q.push({ent[0],ent[1],0});
        int m = maze.size();
        int n = maze[0].size();
        maze[ent[0]][ent[1]] = '+';
        
        while(q.size()) {
            auto [i,j,d] = q.front();q.pop();
            for(auto [a,b] : dir) {
                int x = a+i, y=b+j;
                if(min(x,y)>= 0 and x<m and y<n and maze[x][y] == '.'){
                    if(min(x,y)==0 || x==m-1 || y==n-1) 
                        return d+1;    
                    maze[x][y] = '+';
                    q.push({x,y,d+1});
                }
            }
        }
        return -1;
    }
};