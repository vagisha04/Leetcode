class Solution {
public:
    void dfs(int row,int col, vector<vector<int>> &visited,vector<vector<int>>& grid)
    {
          int m = grid.size();
        int n = grid[0].size();
        visited[row][col]=1;
         int drow[]={-1,0,+1,0};
        int dcol[]={0,+1,0,-1};
        for(int i =0;i<4;i++)
        {
            int nrow = row+drow[i];
            int ncol = col+dcol[i];
            if(nrow>=0 && ncol>=0 && nrow<m && ncol<n && visited[nrow][ncol]==0 && grid[nrow][ncol]==1)
            {
                dfs(nrow,ncol,visited,grid);
}
}
}
    int numEnclaves(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> visited(m,vector<int>(n,0));
        int prevCount = 0;
        for(int i =0;i<m;i++)
        {
for(int j=0;j<n;j++)
{
    visited[i][j]=0;
    if(grid[i][j]==1)
        prevCount++;
}}
        for(int i=0;i<m;i++)
        {
            if(grid[i][0]==1 && visited[i][0]==0)
            {
                dfs(i,0,visited,grid);
}
            if(grid[i][n-1]==1 && visited[i][n-1]==0)
            {
                dfs(i,n-1,visited,grid);
}
}
         for(int i=0;i<n;i++)
        {
            if(grid[0][i]==1 && visited[0][i]==0)
            {
                dfs(0,i,visited,grid);
}
            if(grid[m-1][i]==1 && visited[m-1][i]==0)
            {
                dfs(m-1,i,visited,grid);
}
}
        int finalCount = 0;
         for(int i =0;i<m;i++)
        {
for(int j=0;j<n;j++)
{
   
    if(visited[i][j]==1)
        finalCount++;
}}
        int ans = prevCount-finalCount;
        return ans;
        
        
    }
};