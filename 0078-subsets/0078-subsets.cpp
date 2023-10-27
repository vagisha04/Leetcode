class Solution {
public:
    void func(int ind, vector<int>& ds, vector<vector<int>>& ans,vector<int> nums)
    {
        if(ind>=nums.size()){
            ans.push_back(ds);
            return;
        }
        ds.push_back(nums[ind]);
        func(ind+1,ds,ans,nums);
        ds.pop_back();
        func(ind+1,ds,ans,nums);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> ds;
        vector<vector<int>> ans;
        func(0,ds,ans,nums);
        return ans;
    }
};