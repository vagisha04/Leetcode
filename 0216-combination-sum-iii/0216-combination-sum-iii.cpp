class Solution {
public:
    void combination(int i ,int k,int n, vector<vector<int>>& ans, vector<int>& ds)
    {
       if(k==0 && n==0)
        {
            ans.push_back(ds);
            
        return;
       }
   
    for(int j =i;j<=9;j++){
        if(j<=n)
        {
            ds.push_back(j);
            combination(j+1,k-1,n-j,ans,ds);
            ds.pop_back();
        }
        else
            break;
    }
        
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> ds;
       combination(1,k,n,ans,ds);
        return ans;
    }
};