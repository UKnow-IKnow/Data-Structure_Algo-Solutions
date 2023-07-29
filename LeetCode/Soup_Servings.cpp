//Leetcode Q.808. Soup Servings

//only logic part

class Solution {
public:
    double memo[200][200];
    
    double f(int NA, int NB){
        if(NA <= 0 && NB <= 0) return 0.5;
        if(NA <= 0) return 1.0;
        if(NB <= 0) return 0.0;
        if(memo[NA][NB] > 0) return memo[NA][NB];
        return memo[NA][NB] = 0.25*(f(NA-4,NB)+f(NA-3,NB-1)+f(NA-2,NB-2)+f(NA-1,NB-3));
    };
    
    double soupServings(int N) {
        if(N > 4800) return 1.0;
        return f(ceil((double)N/25), ceil((double)N/25));
    }
};