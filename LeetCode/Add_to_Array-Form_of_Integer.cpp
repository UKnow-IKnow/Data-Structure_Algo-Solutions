//Leetcode Q.989. Add to Array-Form of Integer

//only logic part

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n=num.size();
        int c=0;
        int i;
        for(i=n-1;i>=0 or k>0;i--){
            int r=k%10;
            k/=10;
            if(i>=0){
                int res=num[i]+r+c;
                num[i]=res%10;
                c=res/10;
            }
            else{
                int res=r+c;
                num.insert(num.begin(),res%10);
                c=res/10;
            }

        }
        if(c>0){
            num.insert(num.begin(),c);
        }
        return num;
    }
};