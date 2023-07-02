class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        int start=0;
        
        
        int n = nums.size();
      
       for(int i=0;i<n;i++)
        {
           int count =0;
            if( nums[i]%2==0 )
            {
int j;
                for(j=i+1;j<n;j++)
                {
if((nums[j]%2 != nums[j-1]%2) && (nums[j-1]<=threshold))
{
    count++;
}
        else{
            break;
                }
                }
                if(nums[j-1]<=threshold)
                {
count++;
                }
            }
                start= max(start,count);
            }
           
        return start;
    }
};