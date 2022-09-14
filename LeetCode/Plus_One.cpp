// LeetCode Q.66. Plus One

// Only logic part

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        auto n = digits.size();
        int sum=0;
        for(int i=n-1;i>=0;i--){            
                int num=digits[i]+1;
                string str=to_string(num);
                if(str.length()==2 ){
                    digits[i]=0;
                    sum+=digits[i];
                }
                else{
                    digits[i]=num;
                    sum+=digits[i];
                    break;
                }
        }
        if(digits[n-1]==0&&sum==0)
        {
            auto i=digits.begin();
            digits.insert(i,1);
            
        }
        return digits;
    }
};