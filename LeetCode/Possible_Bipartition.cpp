//Leetcode Q.886. Possible Bipartition

//only logic part

class Solution {
public:
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
         vector<int> color (n,0);
        unordered_map<int,vector<int>> edges;
        
        for(auto item:dislikes){
            edges[item[1]-1].push_back(item[0]-1);
            edges[item[0]-1].push_back(item[1]-1);
        }
        for(int i = 0; i<n;++i){
            if(color[i]==0){   
                int col = 1;  
                color[i] = col;
                stack<int> s; 
                s.push(i);
                                
                while(!s.empty()) {
                    int t = s.top(); s.pop();
                    col = (color[t]==1)?2:1;   
                    for(auto elem:edges[t]){
                        if(color[elem] == 0){   
                         color[elem] = col;
                            s.push(elem);
                        }
                        else if (color[elem]!=col)
                            return false;
                    }
                }
            }
        }
        return true;
    }
};