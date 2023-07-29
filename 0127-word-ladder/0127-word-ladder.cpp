class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        queue<pair<string,int>> q;
        q.push({beginWord,1});
        unordered_set<string> st(wordList.begin(),wordList.end());
        st.erase(beginWord);
        // time complexity : N*26*word.size*logN
        while(!q.empty())
        {
            string word = q.front().first;
            int steps = q.front().second;
            q.pop();
            if(word==endWord)
            {
return steps;
            }
            for(int i=0;i<word.size();i++)
            {
           char original = word[i];
                for(char ch ='a';ch<='z';ch++)
                {
                    word[i]=ch;
                    // it exists in set
                    if(st.count(word)>0)
                    {
                        q.push({word,steps+1});
                        st.erase(word);
}
                    
}
                 word[i]=original; 
            }
            
            }
        return 0;
    }
};