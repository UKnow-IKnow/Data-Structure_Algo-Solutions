//LeetCode Q.1189. Maximum Number of Balloons

// Only Logic Part

//Brute force soultion

class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int ans=0;
        int b=0,a=0,l=0,o=0,n=0;
        for(auto k:text){
            if(k=='b'){
                b++;
            }
            else if(k=='a'){
                a++;
            }
            else if(k=='l'){
                l++;
            }
            else if(k=='o'){
                o++;
            }
            else if(k=='n'){
                n++;
            }
            if(b>=1 && a>=1 && o>=2 && l>=2 && n>=1){
                ans++;
                b--;
                a--;
                l--;
                l--;
                o--;
                o--;
                n--;
            }
        }
        return ans;
    }
};