// LeetCode Q.1876. Substrings of Size Three with Distinct Characters

//Only Logic Part

//Sliding Window solution

class Solution {
public:
    int countGoodSubstrings(string s) {
        int i=0,j=2,n=s.size(),count=0;
        while(j<n)
        {
            if(s[i]!=s[j] && s[i]!=s[i+1] && s[i+1]!=s[j])
                count++;
            i++;
            j++;
        }
        return count;
    }
};