//LeetCode Q.32. Longest Valid Parentheses

// Only logic part

class Solution {
public:
    int longestValidParentheses(string s) {
        int maxValue = 0;
    	stack<int> st;
	    st.push(-1);

    	for(int i = 0; i < s.size(); i++)
	    	if(s[i] == '(')
                st.push(i);
    		else {       
	    		st.pop();

		    	if(st.empty())
                    st.push(i);
    			else
                    maxValue = max(maxValue, i - st.top());
    		}        
        
	    return maxValue;
    }
};