class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
      queue<pair<int,pair<int,int>>> q;
        vector<pair<int,int> >adj[n];
        for(auto i: flights)
        {
adj[i[0]].push_back({i[1],i[2]});
        }
        vector<int> visited(n,1e9);
        visited[src]=0;
        q.push({0,{src,0}});
        while(!q.empty())
        {
            auto it = q.front();
             q.pop();
            int stops = it.first;
            int node = it.second.first;
            int dis= it.second.second;
            
            if(stops>k ){
                 continue;
            }
           
            for(auto x : adj[node])
            {
int adjNode = x.first;
            int w = x.second;
            if(dis+w < visited[adjNode] && stops<=k)
            {
                visited[adjNode] = dis+w;
                q.push({stops+1,{adjNode,dis+w}});
            }}
}
         if(visited[dst]==1e9)
            {
return -1;
            }
        return visited[dst];
        
    }
};