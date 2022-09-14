//LeetCode Q.1268. Search Suggestions System

//only logic part

class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        sort(products.begin(),products.end());
        int l=0;
        int r=products.size()-1;
        int n=searchWord.size();
        vector<vector<string>> ans;
        for(int i=0;i<n;i++){
            char ch=searchWord[i];
            vector<string> temp;
            while(l<=r && products[l][i]!=ch)
                l++;
            while(l<=r && products[r][i]!=ch)
                r--;
            for(int j=l;j<l+min(3,r-l+1);j++)
                temp.push_back(products[j]);
            ans.push_back(temp);
        }
        return ans;
    }
};