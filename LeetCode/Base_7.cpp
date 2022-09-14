// LeetCode Q.504. Base 7

// only logic part

class Solution {
public:
    string convertToBase7(int num) {
        if (num == 0)
        return "0";
        
        bool isNegative = (num < 0);
        num = abs(num);
        string res;
        while (num > 0){
            char temp = num % 7 + '0';
            res = temp + res;
            num /= 7;
        }
        if (isNegative)
            res = "-" + res;
        return res;

    }
};