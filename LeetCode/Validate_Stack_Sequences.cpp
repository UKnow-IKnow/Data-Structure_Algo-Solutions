//Leetcode Q.946. Validate Stack Sequences

//only logic part

class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int i = 0, j = 0;
        stack<int> stk;
        int last = -1;
        
        while((i < pushed.size() || j < popped.size()) && (stk.size() != last)){
            last = stk.size();
            cout << i << " " << j << " " << endl;
            if(!stk.empty() && stk.top() == popped[j]){
                stk.pop();
                j++;
            }else if(i < pushed.size()){
                stk.push(pushed[i]);
                i++;
            }
        }
        
        return stk.size() == 0;
    }
};