//Leetcode q.151. Reverse Words in a String

//only logic part

class Solution {
public:
    string reverseWords(string s) {
        s+=" ";
        string w="";
        string str="";      
        for(int i=0;i<s.size();i++){
	
            if(s[i]!=' '){
                w+=s[i];
            }
		
            else if(s[i]==' ' &&  w.size()>0){
                reverse(w.begin(),w.end());
                str+=w+" ";
                w="";
            }
        }
        str.pop_back();
        reverse(str.begin(),str.end());
    
        return str;
    }
};