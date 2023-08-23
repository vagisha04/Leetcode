class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> ans;
        int i =0,j=0;
        int n = matrix.size();
        int m = matrix[0].size();
        while(i<n && j<m)
        {
            if(j!=m-1)
            {
ans.push_back(matrix[i][j]);
    j++;
            }
                else if(j == m-1)
                {
                    ans.push_back(matrix[i][j]);
                    j=0;
                    i++;
}
        }
        sort(ans.begin(),ans.end());
        return ans[k-1];
    }
};