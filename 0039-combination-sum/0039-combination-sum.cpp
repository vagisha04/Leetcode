class Solution {
public:
    void Combination(int index, int sum,vector<int>& candidates, vector<vector<int>>& ans,vector<int>& ds)
    {
if(index==candidates.size())
{
if(sum==0)
{
ans.push_back(ds);
}
return;
}
    if(candidates[index]<=sum)
    {
ds.push_back(candidates[index]);
  Combination(index,sum-candidates[index],candidates,ans,ds);
        ds.pop_back();
    }
    Combination(index+1,sum,candidates,ans,ds);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
         Combination(0,target,candidates,ans,ds);
        return ans;
    }
};