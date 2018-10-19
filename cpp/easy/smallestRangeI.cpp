// Smallest Range I

class Solution {
public:
    int smallestRangeI(vector<int>& A, int K) {
        if(A.size()==0)
            return 0;

        int mina = INT_MAX, maxa = INT_MIN;

        for(int i=0; i<A.size(); i++)
        {
            maxa = max(maxa, A[i]);
            mina = min(mina, A[i]);
        }

        if ((maxa-K) - (mina+K)<0)
            return 0;

        return (maxa-mina-2*K);

    }
};
