class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        vector<int> rowcount(grid.size(),0),columncount(grid[0].size(),0);
        int res=0;

        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==1)
                {
                    rowcount[i]++;
                    columncount[j]++;
                }
            }
        }

        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==1 && (max(rowcount[i],columncount[j]))>1)
                {
                    res+=1;
                }
            }
        }
        return res;
    }
};