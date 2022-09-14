//LeetCode Q.1342. Number of Steps to Reduce a Number to Zero

//Only Logic part

class Solution {
public:
    int numberOfSteps(int num) {
        auto ans = 0;
        while(num){
            ans++;
            if(num%2 == 0){
                num = num/2;
            }else{
                num--;
            }
        }
        return ans;
    }
};