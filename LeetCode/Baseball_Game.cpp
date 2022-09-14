//LeetCode Q.682. Baseball Game

// Only logic part

class Solution {
public:
    int calPoints(vector<string>& ops) {
        int ans = 0;
        vector<int> scores;
        int n = ops.size();
        
        for(int i = 0; i < n; i++) {
            int size = scores.size();
            if(ops[i] == "+") {
                scores.push_back(scores[size-1] + scores[size-2]);
            } else if (ops[i] == "C") { 
                scores.pop_back();
            } else if (ops[i] == "D") {
                scores.push_back(scores[size-1]*2);
            } else {
                scores.push_back(stoi(ops[i]));
            }
        }
        
        ans = accumulate(scores.begin(), scores.end(), 0);
        //accumulate(): This function returns the sum of all the values lying in a range between [first, last) with the variable sum.
        
        return ans;
    }
};