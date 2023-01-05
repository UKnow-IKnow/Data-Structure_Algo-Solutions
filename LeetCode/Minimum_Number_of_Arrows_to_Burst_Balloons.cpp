//Leetcode Q.452. Minimum Number of Arrows to Burst Balloons

//only logic part

class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        if(points.size() == 0) 
            return 0;
        sort(points.begin(), points.end());
        
        int start = points[0][0], end = points[0][1];
        int ans = 1; 
        
        for(vector<int>& point : points){
            if(point[0] <= end){
                start = point[0];
                end = min(end, point[1]);
            }else{
                ans++;
                start = point[0];
                end = point[1];
            }
        }
        return ans;
    }
};