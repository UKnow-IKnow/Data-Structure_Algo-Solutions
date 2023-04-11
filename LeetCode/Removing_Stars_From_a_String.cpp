//Leetcode Q.2390. Removing Stars From a String

//only logic part

class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        for (char c : s) {
            if (c == '*' && !st.empty()) {
                st.pop();
            } else {
                st.push(c);
            }
        }
    
        string ans;
        
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};