//LeetCode Q.1239. Maximum Length of a Concatenated String with Unique Characters

//only logic part

class Solution {
public:
   bool h(string &s1, string& s2) {
        int arr[26] = {0};
        
        for(char &ch : s1) {
            if(arr[ch-'a'] > 0)
                return true;
            arr[ch-'a']++;
        }
        
        for(char &ch : s2) {
            if(arr[ch-'a'] > 0)
                return true;
             arr[ch-'a']++;
        }
      
        return false;
    } 
     

    
    int r(int i,string ans, vector<string> arr){
        if(i==arr.size()){
            return ans.size();
        }
     
      if(h(ans,arr[i])){
          return r(i+1,ans,arr);
      }
        else {
           int l= r(i+1,ans,arr);
          ans+=arr[i];
        int ri= r(i+1,ans,arr); return max(l,ri);
            }
       
    }
    int maxLength(vector<string>& arr) {
        string ans;
        return r(0,ans,arr);
    }
};