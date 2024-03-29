//Leetcode Q.790. Domino and Tromino Tiling

//only logic part

class Solution {
public:
    int numTilings(int n) {
        int a = 0, b = 1, c = 1, c2, mod = 1e9 + 7;
        while (--n) {
            c2 = (c * 2 % mod + a) % mod;
            a = b;
            b = c;
            c = c2;
        }
        return c;
    }
};