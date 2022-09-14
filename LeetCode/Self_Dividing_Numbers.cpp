// LeetCode Q.728. Self Dividing Numbers

// Only logic Part

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        while(left<= right){
            string s= to_string(left);
            bool flag= true;
            for(int i=0; i<s.size(); i++){
                if(s[i]=='0' || left % (s[i]-'0')!= 0){
                    flag= false;
                    break;
                }
            }
            if(flag== true){
                ans.push_back(left);
            }
            left++;
        }
        return ans;
    }
};