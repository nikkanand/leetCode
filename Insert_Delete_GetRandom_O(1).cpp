//Design a data structure that supports all following operations in average O(1) time.

//insert(val): Inserts an item val to the set if not already present.
//remove(val): Removes an item val from the set if present.
//getRandom: Returns a random element from current set of elements. Each element must have the same probability of being returned.

#include<bits/stdc++.h>
using namespace std;
class RandomizedSet {
    private:
    unordered_map<int,int> mp;
    vector<int>random;
public:
    /** Initialize your data structure here. */
    RandomizedSet() {
        srand(time(nullptr));
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        
            if(mp.count(val)) return false;
        mp[val] = random.size();
        random.push_back(val);
        return true;  

    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        
        if(!mp.count(val)) return false;
        int idx = mp[val];
        int last = random.back();
        if(last != val){
            random[idx] = last;
            mp[last] = idx;
        }
        mp.erase(val);
        random.pop_back();
        return true;
    }
    
    /** Get a random element from the set. */
    int getRandom() {
        int k = rand() % random.size();
        return random[k];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
