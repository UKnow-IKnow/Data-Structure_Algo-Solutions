//LeetCode Q.383. Ransom Note

//only logic part

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> r, m;
        for(auto it: ransomNote)
            r[it]++;
        for(auto it: magazine)
            m[it]++;
        for(int i=0;i<ransomNote.size();i++){
            if(r[ransomNote[i]]>m[ransomNote[i]])
            return false;
        }
        return true; 
    }
};