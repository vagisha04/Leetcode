class Solution {
public:
    string reverseWords(string s) {
        stack<int> st;
        int n = s.size();
        string ans= "";
       for(int i=0;i<n;i++)
        {
           char ch = s[i];
        
           if(ch != ' ')
           {
               st.push(ch);
           }
           else{
               while(!st.empty())
               {
                   char c = st.top();
                   ans.push_back(c);
                   st.pop();
}
               ans.push_back(' ');
           }
            
}
        while (!st.empty()) {
        ans.push_back(st.top());
        st.pop();
    }
        return ans ;
    }
};