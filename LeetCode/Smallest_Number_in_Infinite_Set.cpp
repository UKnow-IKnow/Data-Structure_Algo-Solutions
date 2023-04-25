//Leetcode Q.2336. Smallest Number in Infinite Set

//only logic part

class SmallestInfiniteSet {
set<int> list;
public:
    SmallestInfiniteSet() {
        for(int i=1;i<=1000;i++){
            list.insert(i);
        }
    }
    int popSmallest() {
        auto it = list.begin();
        int ans = *it;
        list.erase(list.begin());
        return ans;
    }
    void addBack(int num) {
        list.insert(num);
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */