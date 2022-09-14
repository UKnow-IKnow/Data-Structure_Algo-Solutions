//LeetCode Q.191. Number of 1 Bits

//Only logic part

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
		while (n) {
			count += n & 1;
			n >>= 1;
		}
		return count;
    }
};