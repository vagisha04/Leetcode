class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int n = heights.size();
        int m = heights[0].size();
         priority_queue<pair<int,pair<int,int>>,
        vector<pair<int,pair<int,int>>>,
        greater<pair<int,pair<int,int>>>> pq;
        vector<vector<int>> visited (n,vector<int>(m,1e9));
        visited[0][0]=0;
        pq.push({0,{0,0}});
        while(!pq.empty())
        {
            auto it = pq.top();
              pq.pop();
            int effort = it.first;
            int row = it.second.first;
            int col = it.second.second;
           
            
            int dc[] = {-1,0,+1,0};
            int dr[] = {0,1,0,-1};
            if(row==n-1 && col ==m-1)
            {
return effort;
            }
            for(int i=0;i<4;i++)
            {
                int nr = dr[i]+row;
                int nc = dc[i]+col;
                if(nc>=0 && nr>=0 && nr<n && nc<m)
                {
                    int newEffort = max(abs(heights[nr][nc]-heights[row][col]),effort);
                    if(newEffort < visited[nr][nc])
                    {
visited[nr][nc]=newEffort;
                    pq.push({newEffort,{nr,nc}});


}
    }
            }
        }
        return 0;
    }
};