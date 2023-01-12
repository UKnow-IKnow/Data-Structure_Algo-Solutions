//Leetcode Q.1519. Number of Nodes in the Sub-Tree With the Same Label

//only logic part

class Solution {
public:
    void solve(int x,int p,vector<vector<int>>&adj,string &labels,vector<vector<int>>&store){
        char now= labels[x];
        store[x][now-'a']++;
        for(int j:adj[x]){
            if(j!=p){
                solve(j,x,adj,labels,store);
                for(int k=0;k<26;k++){
                    store[x][k]+= store[j][k];
                }
            }
        }
    }
    
    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
        vector<vector<int>>store(n,vector<int>(26,0));
        vector<vector<int>>adj(n);
        for(vector<int>x:edges){
            int a= x[0]; int b=x[1];
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        solve(0,0,adj,labels,store);   
        vector<int>ans;
        for(int i=0;i<n;i++){
             char x=labels[i];
             ans.push_back(store[i][x-'a']);
        }
        return ans;
      
    }
};