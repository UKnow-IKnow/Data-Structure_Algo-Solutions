//Leetcode Q.2405. Optimal Partition of String

//only logic part 

class Solution {
public:
    int partitionString(string s) {
        unordered_set<char> ss;
        int ans = 1;
        for (char c : s) {
            if (ss.count(c)) {
                ++ans;
                ss.clear();
            }
            ss.insert(c);
        }
        return ans;
    }
};