//Leetcode Q.150. Evaluate Reverse Polish Notation

//only logic part

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long> st;                          
        
        for (string token : tokens) {
            if (token == "+" || token == "-" || token == "*" || token == "/") {
                int b = st.top(); st.pop();    
                st.top() = token == "+" ? st.top() + b : token == "-" ? st.top() - b : token == "*" ? st.top() * b : st.top() / b;
            } else {
                st.push(stoi(token));         
            }
        }
        
        return st.top();
    }
};