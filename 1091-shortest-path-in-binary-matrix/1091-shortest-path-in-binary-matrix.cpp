class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        if(grid[0][0]==1 || grid[n-1][n-1]!=0)
        {
return -1;}
        
        grid[0][0]=1;
        if(grid.size()==1)
        {
return 1;}
        queue<pair<int,pair<int,int>>> q;
        vector<vector<int>> visited(n,vector<int>(n,INT_MAX));
       
        visited[0][0]=1;
        
        q.push({1,{0,0}});
      
        while(!q.empty())
        {
            auto it = q.front();
            int d = it.first;
            int r = it.second.first;
            int c = it.second.second;
            q.pop();
            int dr[]={-1,-1,-1,0,0,+1,+1,+1};
            int dc[]={-1,0,+1,-1,+1,-1,0,+1};
            for(int i=0;i<8;i++)
            {
                int nr = r+ dr[i];
                 int nc = c+ dc[i];
                if(nr>=0 && nr<n && nc>=0 && nc<n && grid[nr][nc]==0 && d+1 < visited[nr][nc])
                {
                    visited[nr][nc]=d+1;
                    if(nr==n-1 && nc==n-1)
                    {
return d+1;
                    }
                    q.push({d+1,{nr,nc}});
                }
                
                }
}
        return -1;
    }
};