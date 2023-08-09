class Solution {
    private:
    void bfs(int row, int col, vector<vector<int>> &vis, vector<vector<char>>& grid)
    {
        vis[row][col]=1;
        
        queue<pair<int,int>> q;
        q.push({row, col});
        
        int n=grid.size();
        int m=grid[0].size();
        
        while(!q.empty())
        {
            int rows=q.front().first;
            int cols=q.front().second;
            
            q.pop();
            
            
            for(int delRow=-1;delRow<=1;delRow++)
            {
                for(int delCol=-1;delCol<=1;delCol++)
                {
                    int nrow=rows+delRow;
                    int ncol=cols+delCol;
                    
                    if(delRow!=0 && delCol!=0)
                    {
                        continue;
                    }
                    
                    if(nrow>=0 && nrow<n && ncol>=0 && ncol<m 
                        && grid[nrow][ncol]=='1' && !vis[nrow][ncol])
                    {
                        vis[nrow][ncol]=1;
                        q.push({nrow, ncol});
                    }
                }
            }
        }
    }
            
public:
    int numIslands(vector<vector<char>>& grid) {
         int n=grid.size();
        int m=grid[0].size();
        
        vector<vector<int>> vis(n, vector<int>(m, 0));
        
        int count=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!vis[i][j] && grid[i][j]=='1')
                {
                    count++;
                    bfs(i, j, vis, grid);
                }
            }
        }
        
        return count;
    }
};