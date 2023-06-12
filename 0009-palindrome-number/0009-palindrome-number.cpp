class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        return false;
        int n = x;

         long   int digit =0;
       long long  int ans=0;
    while(x!=0)
        {
            digit=x%10;
            ans = ans*10 + digit;
            x=x/10;
            }
            if (ans == n)
            {
                return true;
            }

            return false;

    }
};