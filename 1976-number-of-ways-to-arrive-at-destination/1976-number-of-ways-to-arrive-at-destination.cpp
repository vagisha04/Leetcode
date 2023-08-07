class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
         priority_queue<pair<long long ,long long> , vector<pair<long long,long long>> , greater <pair<long long,long long>>> pq;
         vector<pair<long long,long long>> adj[n];
        for(auto it: roads)
        {
adj[it[0]].push_back({it[1],it[2]});
            adj[it[1]].push_back({it[0],it[2]});
        }
        vector<long long> ways(n,0);
        vector<long long> dist(n,LONG_MAX);
        ways[0]=1;
        dist[0]=0;
        pq.push({0,0});
        int mod = (int)(1e9+7);
        while(!pq.empty())
        {
            auto i = pq.top();
            
long long d = i.first;
        long long node = i.second;
        pq.pop();
        for(auto it: adj[node])
        {
            long long adjNode= it.first;
            long long w = it.second;
            
            if(d+w <dist[adjNode])
            {
            dist[adjNode]=d+w;
                pq.push({d+w,adjNode});
                ways[adjNode]=ways[node];
                
            }
            else if( d+w == dist[adjNode])
            {
ways[adjNode]= (ways[adjNode]+ways[node])%mod;}
}}
        return ways[n-1] % mod;
    }
};