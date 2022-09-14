//LeetCode Q.680. Valid Palindrome II

//Only Logic part

class Solution {
public:
    bool validPalindrome(string s) {
        int left = 0;
        int right = s.size()-1;
        int count = 0;
        
        while(left<=right){
            if(s[left]==s[right]){
                left++;
                right--;
            }
            else {
                left++;
                count++;
            }
        }
        int count1 = 0;
        left=0;
        right = s.size()-1;
                while(left<=right){
            if(s[left]==s[right]){
                left++;
                right--;
            }
            else {
                right--;
                count1++;
            }
        }
        if(count1<=1||count<=1){
            return true;
        }
        else return false;

    }
};