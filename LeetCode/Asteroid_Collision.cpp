//Leetcode Q.735. Asteroid Collision

//only logic part

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& A) {
        int n = A.size();
        
        
        int slow = -1, fast = 0;
        
        for(fast = 0; fast < n; ++fast){
            bool exploded = false;
            
            while(slow >= 0 && A[slow] > 0 && A[fast] < 0){
                if(abs(A[slow]) > abs(A[fast])){
                    exploded = true;
                    break;
                }else if(abs(A[slow]) == abs(A[fast])){
                    --slow;
                    exploded = true;
                    break;
                }else{
                    --slow;
                }
            }
            
            if(!exploded){
                A[++slow] = A[fast];
            }
        }
        
        return vector<int>(A.begin(), A.begin()+slow+1);
    }
};