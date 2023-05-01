//Leetcode Q.1491. Average Salary Excluding the Minimum and Maximum Salary

//only logic part

class Solution {
public:
    double average(vector<int>& salary) {
        double sum = 0;
        int maxv = INT_MIN, minv = INT_MAX;
        for (auto s : salary) {
            sum += s;
            maxv = max(maxv, s);
            minv = min(minv, s);
        }
        return (sum - maxv - minv) / (salary.size() - 2);
    }
};

