//Leetcode Q.953. Verifying an Alien Dictionary

//only logic part

class Solution {
public:
    int check(char c, string& order){
        return find(order.begin(), order.end(), c) - order.begin();
    }
    bool isAlienSorted(vector<string>& words, string order) {
        for(int i = 0; i < words.size() - 1; i++){
            int l = min(words[i].size(), words[i+1].size());
            bool formerSame = true;
            for(int j = 0; j < l; j++){
                if(check(words[i][j], order) < check(words[i+1][j], order)){
                    formerSame = false;
                    break;
                }else if(check(words[i][j], order) > check(words[i+1][j], order)){
                    return false;
                }
            }
            if(formerSame && words[i].size() > words[i+1].size()){
                return false;
            }
        }
        return true;
    }
};