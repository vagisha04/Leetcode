class Solution {
public:
    int reverse(int x) {
      long   int digit =0;
        long  int ans=0;
      
        
        while(x!=0)
        {
            digit=x%10;
            ans = ans*10 + digit;
            x=x/10;
            
        }
        if(x<0)
        {
            ans = ans* -1;
        }
        if(ans > INT_MAX || ans < INT_MIN)
        {
            return 0;
        }

       
        return ans;
    }
};