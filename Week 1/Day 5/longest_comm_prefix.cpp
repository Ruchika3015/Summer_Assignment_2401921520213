class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string first=strs[0];
        string end=strs.back();
        if (first.empty())
        return "";
        string ans="";
        for(int i=0;i<first.size();i++)
        {
            if(first[i]!=end[i])
            break;
            ans+=first[i];
        }
        return ans;
    }
};
