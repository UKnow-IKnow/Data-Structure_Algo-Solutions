//Leetcode Q.520. Detect Capital

//only logic part

class Solution {
public:
    bool detectCapitalUse(string word) {
        int count=0;
        int i;
        int loc=i;
        for(int i=0;i<word.size();i++){
            if(word[i]>='A' && word[i]<= 'Z'){
                count++;
                loc=i;
            }
        }
        if(count==word.size() || count==0 ||(count==1 && loc==0))
            return true;
    return false;
    }
};