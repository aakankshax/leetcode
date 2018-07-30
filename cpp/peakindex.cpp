// Peak Index in a Mountain Array

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        for(int i=1; i<A.size(); i++)
        {
            if((A[i]>A[i+1])&&(A[i]>A[i-1]))
                return i;
        }
        
    }
};