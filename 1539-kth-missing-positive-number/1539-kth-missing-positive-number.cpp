class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> ans;
     int n=arr.size()+k;
            int result=0;
            int j=0;;
            for(int i=1;i<=n;i++)
            {
               if(j<arr.size() && arr[j]==i)
               {
                   j++;
               }
               else
               {
                   ans.push_back(i);
               }
                
            } 
             result = ans[k-1];
         return result;
     
    }
};