//Leetcode Q.2246. Longest Path With Different Adjacent Characters

//only logic part

class Solution {
public:
     int solve(int node,int parent,vector<int> adj[],string &s,int& maxi){
        priority_queue<int> pq;
        pq.push(0);
        pq.push(0);
        for(auto &i:adj[node]){
            if(i!=parent){
                pq.push(solve(i,node,adj,s,maxi));
            }
        }
        int max1=pq.top();
        pq.pop();
        int max2=pq.top();
        pq.pop();
        maxi=max(maxi,max1+max2+1);
        return ((parent==-1)||(s[parent]!=s[node]))? max(max1,max2)+1:0;
    }
    int longestPath(vector<int>& parent, string s) {
        int n=s.size();
        vector<int> adj[n];
        for(int i=1;i<n;i++){
            int u=parent[i],v=i;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int maxi=0;
        int res=solve(0,-1,adj,s,maxi);
        return max(res,maxi);
    }
};