// Flipping an Image

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        vector<vector<int>> B = A;
        
        for(int i=0; i<A.size(); i++)
        {
            for(int j=0; j<A[i].size(); j++)
            {
                for(int k=A[i].size()-1, l=0; k>=0; k--, l++)
                {   B[i][l] = !(A[i][k]);
                }
                    
            }
            
        }
        
        return B;    
        
    }
};

