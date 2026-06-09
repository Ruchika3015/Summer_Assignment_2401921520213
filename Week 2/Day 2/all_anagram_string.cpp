class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        int n=s.size();
        int m=p.size();
        if(m>n)
        return ans;
        vector<int>f1(26,0);
        vector<int>f2(26,0);
        for(char c:p)
        f1[c-'a']++;
        for(int i=0;i<m;i++)
        f2[s[i]-'a']++;
        if(f1==f2)
        ans.push_back(0);
        for(int i=m;i<n;i++)
        {
            f2[s[i]-'a']++;
            f2[s[i-m]-'a']--;
            if(f1==f2)
            ans.push_back(i-m+1);
        }
        return ans;
    }
};