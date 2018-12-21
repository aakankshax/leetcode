class RecentCounter {
public:
    vector<int> vec;
    RecentCounter() {
        
    }
    
    int ping(int t) {
        vec.push_back(t);
        for (int i=0; i<vec.size();i++){
            while (t-3000 > vec[i])
                vec.erase(vec.begin()+i);
        }           
        return vec.size();
    }
    
    
    
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */