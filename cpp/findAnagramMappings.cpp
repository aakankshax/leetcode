// Find Anagram Mappings

class Solution {
public:
    vector<int> anagramMappings(vector<int>& A, vector<int>& B) {
        // indexMap B[i] : index in B
        map<int, int> indexMap;
        for(int i=0; i<B.size(); i++)
        {
            indexMap[B[i]] = i;
        }

        vector<int> res;

        for(int i=0; i<A.size(); i++)
        {
            res.push_back(indexMap[A[i]]);
        }

        return res;

        /*for(auto it = B.begin(); it!=B.end(); it++)
        {
            cout<<*it<<" ";
        } */
        //return vector<int>(0);

        //indexMap.find(A[i])




    }
};
