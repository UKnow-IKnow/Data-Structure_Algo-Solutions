//LeetCode Q.1578. Minimum Time to Make Rope Colorful

//only logic part

class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        priority_queue<int, vector<int>, greater<>> minHeap;
        int n = colors.size();
        int ans = 0;
        minHeap.push(neededTime[0]);
        for(int i=1; i<n; i++){
            if(colors[i] != colors[i-1]){
                while(minHeap.size() > 1){
                    ans += minHeap.top();
                    minHeap.pop();
                }
                minHeap.pop();
            }
            minHeap.push(neededTime[i]);
        }

        if(colors[n-1] == colors[n-2]){
            while(minHeap.size() > 1){
                    ans += minHeap.top();
                    minHeap.pop();
                }
        }
        return ans;
    }
};