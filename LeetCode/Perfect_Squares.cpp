//LeetCode Q.279. Perfect Squares

//only logic part

class Solution {
public:
    int numSquares(int n) {
        while(n % 4 == 0){
            n /= 4;
        }
        if(n%8 == 7) 
            return 4;
        for(int a = 0; a*a <= n; ++a){
            int b = sqrt(n-a*a);
            if(a*a + b*b == n){
                return 1 + !!a;
            }
        }
        return 3;
    }
};