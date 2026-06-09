class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>a;
        int l=0;
        int ans=0;
        for(int i=0;i<s.length();i++)
        {
            while(a.find(s[i])!=a.end())
            {
                a.erase(s[l]);
                l++;
            }
            a.insert(s[i]);
            ans=max(ans,i-l+1);
        }
        return ans;
    }
};

