//LeetCode Q.1207. Unique Number of Occurrences

//only logic part

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int>m1, m2;
		for(int i=0; i<arr.size(); i++){
            m1[arr[i]]++;
        }
		for(auto it:m1){
            m2[it.second]++;
        }
		return m1.size()==m2.size();
    }
};