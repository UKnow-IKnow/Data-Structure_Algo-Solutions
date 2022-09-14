//LeetCodeQ.81. Search in Rotated Sorted Array II

//only Logic Part
//pure STL

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        if (find (nums.begin(),nums.end(),target) != nums.end() ) return true;
        else return false;
    }
};