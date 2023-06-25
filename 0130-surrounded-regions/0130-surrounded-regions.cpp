class Solution {
public:
     void dfs(int row,int col, vector<vector<int>> &visited,vector<vector<char>>& board)
    {
          int m = board.size();
        int n = board[0].size();
        visited[row][col]=1;
         int drow[]={-1,0,+1,0};
        int dcol[]={0,+1,0,-1};
        for(int i =0;i<4;i++)
        {
            int nrow = row+drow[i];
            int ncol = col+dcol[i];
            if(nrow>=0 && ncol>=0 && nrow<m && ncol<n && visited[nrow][ncol]==0 && board[nrow][ncol]=='O')
            {
                dfs(nrow,ncol,visited,board);
}
}
}
    void solve(vector<vector<char>>& board) {
         int m = board.size();
        int n = board[0].size();
        vector<vector<int>> visited(m,vector<int>(n,0));
       
        for(int i =0;i<m;i++)
        {
for(int j=0;j<n;j++)
{
    visited[i][j]=0;
  
}}
        for(int i=0;i<m;i++)
        {
            if(board[i][0]=='O' && visited[i][0]==0)
            {
                dfs(i,0,visited,board);
}
            if(board[i][n-1]=='O' && visited[i][n-1]==0)
            {
                dfs(i,n-1,visited,board);
}
}
         for(int i=0;i<n;i++)
        {
            if(board[0][i]=='O' && visited[0][i]==0)
            {
                dfs(0,i,visited,board);
}
            if(board[m-1][i]== 'O' && visited[m-1][i]==0)
            {
                dfs(m-1,i,visited,board);
}
}
        
         for(int i =0;i<m;i++)
        {
for(int j=0;j<n;j++)
{
   
    if(visited[i][j]==0 && board[i][j]=='O')
    {
       board[i][j]='X';
}}
         }
      
        
        
    }
};