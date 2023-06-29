class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int V = graph.size();
         vector<int> count(V);
        for(int i=0;i<V;i++)
        {
count[i]=0;
        }
        vector<int> adj[V];
	    for(int i=0;i<V;i++)
	    {
	        for(auto it : graph[i])
	        {
                adj[it].push_back(i);
	            count[i]++;
	        }
	    }
	    queue<int> q;
	    for(int i=0;i<V;i++)
	    {
	        if(count[i]==0)
	        {
	            q.push(i);
	        }
	    }
	    vector<int> ans;

	    while(!q.empty())
	    {
	        int node = q.front();
	        q.pop();
	        ans.push_back(node);
	        
	        
	            for(auto it: adj[node])
	            {
	                count[it]--;
	                if(count[it]==0)
	                {
	                    q.push(it);
	                }
	                
	            }
	        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};