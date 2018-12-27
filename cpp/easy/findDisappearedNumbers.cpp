class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> missingInArray;
        
        for (int i = 0; i < nums.size(); i++) 
        {
            while(nums[i] != i + 1)
            {
                int correctIndex = nums[i] - 1;
                
                if (nums[i] == nums[correctIndex])
                    break;
                
                swap(nums[i], nums[correctIndex]);
            }            
        }
        
        for (int i = 0; i < nums.size(); i++) // LOOP-C
        {
            if (nums[i] != i + 1)
            {
                missingInArray.push_back(i + 1);
            }
        }
        
        return missingInArray;
        
    }
};



/*
vector<int> res;
        vector<int>::iterator it;
        int max = 0;
        
        for(auto i: nums)
        {
            if(max<i)
                max = i;
        }
        
        for(int i=1; i<=nums.size(); i++)
        {
            it = std::find (nums.begin(), nums.end(), i); 
            if (it != nums.end())                 
                continue;
            else
                res.push_back(i);
        }
        
        return res;
*/