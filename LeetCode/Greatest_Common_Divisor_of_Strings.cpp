//Leetcode Q.1071. Greatest Common Divisor of Strings

//only logic part

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if(str1 + str2 == str2 + str1){
            return str1.substr(0, gcd(str1.length(), str2.length()));
        }
        return "";
    }
};