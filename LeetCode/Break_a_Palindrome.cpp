//LeetCode Q.1328. Break a Palindrome

//only logic part

class Solution {
public:
    string breakPalindrome(string s) {
        int n = s.length();
        if(n == 1) {
            return "";
        }
        for(int i = 0; i < n; i++) {
            int j = n - 1 - i;
            if(i == j) {
                continue;
            }
            if(s[i] != 'a') {
                s[i] = 'a';
                return s;
            }
        }
        s[n-1] = 'b';
        return s;
    }
};