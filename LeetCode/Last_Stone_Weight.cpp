// LeetCode Q.1046. Last Stone Weight

// only logic part

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        sort(stones.begin(),stones.end());
        int a=stones.size()-1;
        if(a==0){
            return stones[a];
        }
        for(int i=0;i<stones.size();i++){
            sort(stones.begin(),stones.end());
            if(stones[a]>0 && stones[a-1]>0){
                stones[a]=stones[a]-stones[a-1];
                stones[a-1]=0;
            }
            else{
                break;
            }
        }
        return stones[a];
    }
};