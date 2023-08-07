class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
       priority_queue<pair<int,int> , vector<pair<int,int>> , greater <pair<int,int>>> pq;
    vector<pair<int,int>> adj[n+1];
        for(auto it: times)
        {
adj[it[0]].push_back({it[1],it[2]});
        }
        vector<int> visited(n+1,1e9);
         pq.push({0,k});
        visited[k]=0;
        
        while(!pq.empty())
        {
            auto i = pq.top();
            
int t = i.first;
        int node = i.second;
        pq.pop();
        for(auto it: adj[node])
        {
            int adjNode= it.first;
            int time = it.second;
            if(time+t <visited[adjNode])
            {
visited[adjNode]=time+t;
            pq.push({time+t,adjNode});
                
            }
}}
        int ans =0;
        for(int i=1;i<visited.size();i++)
        {
            ans = max(ans,visited[i]);
}
        if(ans == 1e9)
        {
            return -1;
        }
       
        return ans;
        
    }
};