//LeetCode Q.357. Count Numbers with Unique Digits

//only logic part

class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n == 0)
            return 1;
        int ans = 10, calc = 9, temp = 9;
        for(int i = 0; i < n - 1; i++) {
            calc *= temp;
            ans += calc;
            temp--;
        }
        return ans;
    }
};