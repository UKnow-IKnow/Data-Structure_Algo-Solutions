//Leetcode Q.947. Most Stones Removed with Same Row or Column

//only logic part

class Solution {
public:
     vector<int> par,sz;
    
    int findPar(int a){
        if(par[a]==a) return a;
        return par[a] = findPar(par[a]);
    }
    
    void merge(int a, int b){
        a = findPar(a);
        b = findPar(b);
        if(a!=b){
            if(sz[a]<sz[b]) swap(a,b);
            par[b] = a;
            sz[a] += sz[b];
        }
    }
    
    int removeStones(vector<vector<int>>& stones) {
        int n = stones.size(), ans = 0;
        par.resize(n);
        for(int i=0; i<n; i++) par[i]=i;
        sz.resize(n,1);
        vector<int> row_seen(10001, -1);
        vector<int> col_seen(10001, -1);
        
        for(int i=0; i<n; i++){
            if(row_seen[stones[i][0]] != -1)
                merge(row_seen[stones[i][0]], i);
            else row_seen[stones[i][0]] = i;
            
            if(col_seen[stones[i][1]] != -1)
                merge(col_seen[stones[i][1]], i);
            else col_seen[stones[i][1]] = i;
        }
        
        for(int i=0; i<n; i++)
            if(par[i]==i) ans += (sz[i]-1);
                
        return ans;
    }
};