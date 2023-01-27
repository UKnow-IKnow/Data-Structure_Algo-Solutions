//Leetcode Q.472. Concatenated Words

//only logic part

class Solution {
public:
    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
        vector<string> res;
        unordered_set<string> dict(words.begin(), words.end());
        for (string word : words) {
            if (dfs(dict, word, 0)) res.push_back(word);
        }
        return res;
    }

private:
    bool dfs(unordered_set<string>& dict, string& word, int count) {
        if (dict.count(word) && count > 1) return true;
        for (int i = 1; i < word.size(); ++i) {
            string left = word.substr(0, i);
            if (!dict.count(left)) continue;
            string right = word.substr(i);
            if (dict.count(right) || dfs(dict, right, count + 1)) return true;
        }
        return false;
    }
};