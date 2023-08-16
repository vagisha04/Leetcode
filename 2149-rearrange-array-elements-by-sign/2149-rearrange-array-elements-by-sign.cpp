class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int s= nums.size();
      int  p=0;
      int n=1;
      vector<int> ans(s,0);
      for(int i =0;i<s;i++)
      {
          if(nums[i]>0)
          {
              ans[p]=nums[i];
              p+=2;
          }
          else
          {
              ans[n]=nums[i];
              n+=2;
          }
      }
      return ans;
    }
};