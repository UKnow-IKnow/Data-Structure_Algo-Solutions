//LeetCode Q.374. Guess Number Higher or Lower

//Only Logic part


/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
 long long int m = 1e12+7;
    int guessNumber(int n) {
        int low = 1 ;
        int high = n;
        while(low<=high)
        {
            int mid = ((low %m +high %m)%m)/2;
            int a = guess(mid);
            if(a==0) 
                return mid;
            if(a==1) 
                low = mid+1;
            if(a==-1)
                high = mid-1;
            
        }
        return -1;
    }
};