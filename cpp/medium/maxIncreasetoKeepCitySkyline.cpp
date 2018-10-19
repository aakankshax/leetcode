// Max Increase to Keep City Skyline

class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int maxa, mina, sum = 0;
        vector<int> maxlr, maxtb;
        vector<vector<int>> newvec(grid.size(), vector<int>(grid[0].size(), 0));
        // new vector<vector<int>>(grid.size(), vector<int>(grid[0].size(), 0));
        // vector<int> testvec = new vector<>(size, value);

        for(int i=0; i<grid.size(); i++)
        {
            maxa = 0;
            for(int j=0; j<grid[i].size(); j++)
            {
                maxa = max(maxa, grid[i][j]);
            }

            maxlr.push_back(maxa);

        }

        for(int i=0; i<grid.size(); i++)
        {
            maxa = 0;
            for(int j=0; j<grid[i].size(); j++)
            {
                maxa = max(maxa, grid[j][i]);
            }

            maxtb.push_back(maxa);

        }

        for(int i=0; i<newvec.size(); i++)
        {
            for(int j=0; j<newvec[0].size(); j++)
            {
                mina = min(maxtb[j], maxlr[i]);
                newvec[i][j] = mina;
            }
        }

      /*  int k = 0;
        for(int i=0; i<maxtb.size(); i++)
        {   for(int j=0; j<maxlr.size(); j++)
            {
                mina = min(maxtb[i], maxlr[j]);
                newvec[k].push_back(mina);
            }
            k++;
        } */

        for(int i=0; i<newvec.size(); i++)
        {
            for(int j=0; j<newvec[i].size(); j++)
            {
                cout<<newvec[i][j]<<" ";
            }

            cout<<endl;
        }

        for(int i=0; i<grid.size(); i++)
             for(int j=0; j<grid[i].size(); j++)
                 newvec[i][j]-=grid[i][j];

        for(int i=0; i<grid.size(); i++)
            for(int j=0; j<grid[i].size(); j++)
            {
                //cout<<newvec[i][j]<<" ";
                sum+=newvec[i][j];
            }

        return sum;

       // return 0;
    }
};
