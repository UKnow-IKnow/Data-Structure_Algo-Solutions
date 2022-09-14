//LeetCode Q.168. Excel Sheet Column Title

// Only Logic Part

class Solution {
public:
    string convertToTitle(int columnNumber) {
        string s;
        char ch;
        while(columnNumber!=0){
            columnNumber-=1;
            ch='A'+columnNumber%26;
            s=ch+s;
            columnNumber=columnNumber/26;
        }
        return s;
    }
};