class Solution {
public:
    vector<int> diStringMatch(string S) {
        vector<int> res;
        int countd = S.size(), counti = 0;
        
        for(auto i : S)
        {
            if(i=='I')
                res.push_back(counti++);
            else
                res.push_back(countd--);        
        }
        
       res.push_back(counti++);
    
        return res;
        
    }
};