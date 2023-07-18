class Solution {
public:
    
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
         int V = prerequisites.size();
        vector<vector<int>> adj(numCourses);
         vector<int> count(numCourses,0);
          vector<int> ans;
       
        for(auto it:  prerequisites)
        {
           adj[it[1]].push_back(it[0]);
            count[it[0]]++;
        }
       
	    queue<int> q;
	    for(int i=0;i<numCourses;i++)
	    {
	        if(count[i]==0)
	        {
	            q.push(i);
	        }
	    }
	    
	    
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
        if(ans.size()==numCourses)
        {
            return ans;
        }
        return {} ;
    }
};