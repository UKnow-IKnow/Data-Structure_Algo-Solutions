//LeetCode Q.1780. Check if Number is a Sum of Powers of Three

//only logic part

class Solution {
public:
    bool checkPowersOfThree(int n) {
        while(n>1){
            if(n%3==2) 
                return false;
            n/=3;
        }
        return true;
    }
};