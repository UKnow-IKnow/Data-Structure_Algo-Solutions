//Leetcode Q.352. Data Stream as Disjoint Intervals

//only logic part

class SummaryRanges {
public:
    vector<int> arr;
    set<int> set_check;
    SummaryRanges() {
        
    }
    
    void addNum(int value) {
        if(set_check.count(value)==0) {
            arr.push_back(value);
            set_check.insert(value);
            sort(begin(arr), end(arr)); 
        }
    }
    
    vector<vector<int>> getIntervals() {
        vector<vector<int>> res;
        vector<int> temp; 
        int i, j;
        for(i=0; i<arr.size(); i++){
            temp.push_back(arr[i]);
            temp.push_back(arr[i]);
            for(j=i+1; j<arr.size(); j++) {
                if(arr[j]-1 == temp.back()) 
                    temp[1] = arr[j];
                else
                    break;
            }
            res.push_back(temp); 
            temp.clear(); 
            i=j-1; 
        }
        return res;
        
    }
};

/**
 * Your SummaryRanges object will be instantiated and called as such:
 * SummaryRanges* obj = new SummaryRanges();
 * obj->addNum(value);
 * vector<vector<int>> param_2 = obj->getIntervals();
 */