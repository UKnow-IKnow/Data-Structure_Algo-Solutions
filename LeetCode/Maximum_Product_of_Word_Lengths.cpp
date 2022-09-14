//LeetCode Q.318. Maximum Product of Word Lengths

// only logic part

class Solution {
public:
    int maxProduct(vector<string>& words) {
        int ans=0;
        int n = words.size();
        for(int i=0;i<n;i++)
            sort(words[i].begin(),words[i].end());
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int k=0,l=0;
                while(k<words[i].size() and l<words[j].size() and words[i][k]!=words[j][l]){
                    if(words[i][k]<words[j][l])
                        k++;
                    else
                        l++;
                }
                if(k==words[i].size() or l==words[j].size()){
                    int x=words[i].size()*words[j].size();
                    ans=max(ans,x);
                }
            }
        }
        return ans;
    }
};