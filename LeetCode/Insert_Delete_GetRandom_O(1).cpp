//Leetcode Q.380. Insert Delete GetRandom O(1)

//only logic prt

class RandomizedSet {
public:
    set<int> myset;
    
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        std::pair<std::set<int>::iterator, bool> result = myset.insert(val);
        return result.second;
    }
    
    bool remove(int val) {
        if(myset.find(val) == myset.end()){
            return false;
        }
        myset.erase(val);
        return true;
    }
    
    int getRandom() {
        int n = myset.size();
        set<int>::iterator it = myset.begin();
        advance(it, rand()%n);
        return *it;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */