class Solution {
public:
    int findMinDifference(vector<string>& time) {
         vector<int> ans;
        
        for(int i=0;i<time.size();i++)
        {
            string cur=time[i];

            int hr=stoi(cur.substr(0,2));
            int minute=stoi(cur.substr(3,2));
            int tot=hr*60+minute;
            ans.push_back(tot);
        }

        
        sort(ans.begin(),ans.end());

        
        int mini=INT_MAX;
        for(int i=0;i<ans.size()-1;i++){
            int diff=ans[i+1]-ans[i];
            mini=min(diff,mini);
        }
        int last1=(ans[0]+1440)-ans[ans.size()-1];
        int last2=ans[ans.size()-1]-ans[0];
      
        mini=min(mini,last1);

        return mini;
    }
};