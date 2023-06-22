class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int m = image.size();
        int n = image[0].size();
        queue<pair<int,int>> q;
        vector<vector<int>> visited(m,vector<int>(n,0));
        int start = image[sr][sc];
        for(int i = 0;i<m;i++)
        {
for(int j=0;j<n;j++)
{
    visited[i][j]=0;
    
}
        }
        image[sr][sc]=color;
        visited[sr][sc]=1;
        q.push({sr,sc});
        int drow[]={-1,0,+1,0};
        int dcol[]={0,+1,0,-1};
        
        while(!q.empty())
        {
int r = q.front().first;
int c  = q.front().second;
 
        q.pop();
        for(int i =0;i<4;i++)
        {
            int nrow = r + drow[i];
            int ncol = c + dcol[i];
            if(nrow>=0 && nrow< m && ncol>=0 && ncol< n && visited[nrow][ncol]==0 && image[nrow][ncol]==start)
            {
q.push({nrow,ncol});
                visited[nrow][ncol]=1;
                image[nrow][ncol]=color;
                }
}
    }
        return image;
    }
};