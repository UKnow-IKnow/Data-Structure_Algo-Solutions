//Leetcode Q.2007. Find Original Array From Doubled Array

//only logic part

class Solution {
public:
    vector<int> findOriginalArray(vector<int>& v) {
        vector<int> ans;
        int n = v.size();
        sort(v.begin(),v.end());
        
        map<int,int> mp;
        for(int i=0;i<n;i++) mp[v[i]]++;
      
        if((mp[0])%2==0){
            for(int j=0;j<mp[0]/2;j++){
                ans.push_back(0);
            }
        }else{
            return {};
        }
        
        for(int i=0;i<n;i++){
            if(mp[v[i]]>0 && mp[2*v[i]]>0 && v[i]!=0){
                ans.push_back(v[i]);
                mp[v[i]]--;
                mp[2*v[i]]--;
            }else if(mp[v[i]]>0 && v[i]!=0){
                return {};
            }
        }
        return ans;
    }
};