//Leetcode Q.1662. Check If Two String Arrays are Equivalent

//only logic part

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1, s2;
        for(auto i: word1){
            s1+=i;
        }
        for(auto i: word2){
            s2+=i;
        }
        return s1 == s2;
    }
};