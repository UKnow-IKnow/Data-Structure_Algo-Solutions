//LeetCode Q.1832. Check if the Sentence Is Pangram

//only logic part

class Solution {
public:
    bool checkIfPangram(string s) {
        sort(begin(s), end(s));
        return distance(begin(s), unique(begin(s), end(s))) == 26;
    }
};