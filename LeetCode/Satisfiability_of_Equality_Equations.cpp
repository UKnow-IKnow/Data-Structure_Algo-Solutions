// Leetcode Q.990. Satisfiability of Equality Equations

//only logic part

class Solution {
public:
    int findparent(int i,vector<int>&parent){
        if(parent[i]==i)return i;
        return parent[i]=findparent(parent[i],parent);
    }
    
    void makeunion(int a,int b,vector<int>&rank,vector<int>&parent){
        a = findparent(a,parent);
        b = findparent(b,parent);
        if(rank[a]<rank[b]){
            parent[a]=b;
        }
        else if(rank[b]<rank[a]){
            parent[b]=a;
        }
        else{
            parent[b]=a;
            rank[a]++;
        }
    }
    
    bool equationsPossible(vector<string>& equations) {
        vector<string>a,b;
        for(auto ele:equations){
            if(ele[1]=='='){
                a.push_back(ele);
            }
            else{
                b.push_back(ele);
            }
        }
        vector<int>parent(26),rank(26);
        for(int i=0;i<26;i++){
            parent[i]=i;
        }
        for(auto ele:a){
            int a=ele[0]-'a',b=ele[3]-'a';
            makeunion(a,b,rank,parent);
        }
        for(auto ele:b){
            int a=ele[0]-'a',b=ele[3]-'a';
            
            if(findparent(a,parent)==findparent(b,parent))return false;
        }
        return true;
    }
};