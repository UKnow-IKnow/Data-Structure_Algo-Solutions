//Leetcode Q.744. Find Smallest Letter Greater Than Target

//only logic part

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        for(char letter : letters){
            if(letter > target){
                return letter;
            }
        }
        return letters[0];
    }
};