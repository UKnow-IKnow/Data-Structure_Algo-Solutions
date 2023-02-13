//Leetcode Q.1523. Count Odd Numbers in an Interval Range

//only logic part

class Solution {
public:
    int countOdds(int low, int high) {
        int count=0;
        for(int i=low;i<=high;i++){
            if(i%2!=0) count++;
        }
        return count;
    }
};