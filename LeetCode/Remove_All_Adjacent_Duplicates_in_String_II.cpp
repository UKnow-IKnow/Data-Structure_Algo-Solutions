//LeetCode Q.1209. Remove All Adjacent Duplicates in String II

//using Stack solution

class Solution {
public:
    string removeDuplicates(string s, int k) {
        
        stack<char> st;
        
        int i = 0;
        
        int count = 1;//count of repeated characters
        
        while(i<s.length()){
            if(st.empty() || st.top()!=s[i]){
                st.push(s[i]);
                count = 1;
            }
            else if(count==k-1) {
                //remove repeated by k
                while(count--){
                    st.pop(); 
                }
                //recompute the previous repeated
                if(!st.empty()){
                    int c = 1;
                    char prev = st.top();
                    st.pop();

                    while(!st.empty() && prev==st.top()){
                        c++;
                        st.pop();
                    }

                    count = c;

                    while(c--){
                        st.push(prev);
                    }
                }
            }
            else {
                st.push(s[i]);
                count++;
            }
            i++;
        }
        
        string ans = "" ;
        
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        
        reverse(ans.begin(),ans.end());
        
        return ans;
        
    }
};