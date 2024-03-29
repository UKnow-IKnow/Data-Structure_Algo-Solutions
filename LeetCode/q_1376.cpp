//Leetcode Q.1376. Time Needed to Inform All Employees

//only logic part

class Solution {
public:
    unordered_map<int, vector<int>> children;
    vector<int> informTime;
    int totalTime = 0;
    
    void dfs(int node, int curTime){
        totalTime = max(totalTime, curTime);
        for(int child : children[node]){
            dfs(child, curTime + informTime[node]);
        }
    }
    
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        for(int i = 0; i < manager.size(); i++){
            children[manager[i]].push_back(i);
        }
        
        this->informTime = informTime;
        
        dfs(headID, 0);
        
        return totalTime;
    }
};