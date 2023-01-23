//Leetcode Q.997. Find the Town Judge

//only logic part

class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        vector<int> in(N), out(N);
        
        for(vector<int> edge : trust){
            int from = edge[0]-1, to = edge[1]-1;
            out[from]++;
            in[to]++;
        }
        
        for(int i = 0; i < N; i++){
            if(in[i] == N-1 && out[i] == 0){
                return i+1;
            }
        }
        
        return -1;
    }
};