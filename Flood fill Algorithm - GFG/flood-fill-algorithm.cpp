//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        // Code here 
         int m = image.size();
        int n = image[0].size();
        queue<pair<int,int>> q;
        int visited[m][n];
        int start = image[sr][sc];
        if(start==newColor)
        {
return image;
        }
        for(int i = 0;i<m;i++)
        {
for(int j=0;j<n;j++)
{
    visited[i][j]=0;
    
}
        }
        image[sr][sc]=newColor;
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
                image[nrow][ncol]=newColor;
                }
}
    }
        return image;
    
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>image(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> image[i][j];
		}
		int sr, sc, newColor;
		cin >> sr >> sc >> newColor;
		Solution obj;
		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends