//LeetCode Q.345. Reverse Vowels of a String

//Only Logic Part

// Brute force solution

class Solution {
public:

    bool isVowel(char i){
        if(i=='a' || i=='e' || i=='i' || i=='o' || i=='u' || i=='A' || i=='E' || i=='I' || i=='O' || i=='U' )
            return true;
        return false;
    }
    
    string reverseVowels(string s) {
        int i = 0 , j = s.length()-1;
        while(i < j){
            if(isVowel(s[i]) && isVowel(s[j]) ){
                swap(s[i],s[j]);
                i++,j--;
            }
            else if(isVowel(s[i]) && !isVowel(s[j]) ){
                j--;
            }
            else if(!isVowel(s[i]) && isVowel(s[j]) ){
                i++;
            }
            else{
                i++ , j--;
            }
        }
        return s;
    }
};