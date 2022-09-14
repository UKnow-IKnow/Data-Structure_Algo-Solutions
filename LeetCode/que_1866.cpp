// LeetCode Q.1886. Determine Whether Matrix Can Be Obtained By Rotation

//only logic solution

class Solution {
public:
    bool findRotation(vector<vector<int>>& m, vector<vector<int>>& target) {
        int n_rotation=0;
        int n=m.size();
        while(n_rotation<4){
            if(m==target)
                return true;
            else{
                for(int i=0;i<n;i++)
                    for(int j=0;j<i;j++)
                        swap(m[i][j],m[j][i]);
                for(int i=0;i<n;i++)
                    reverse(m[i].begin(),m[i].end());
            }
            n_rotation++;
            if(m==target)
                return true;
        }
        return false;
    }
};