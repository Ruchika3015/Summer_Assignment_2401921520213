class Solution {
public:
    string reverseWords(string s) {
        string a="";
        string ans="";
        for (char c:s) {
            if (c==' ') {
                reverse(a.begin(),a.end());
                ans+=a+" ";
                a="";
            } else {
                a+=c;
            }
        }
        reverse(a.begin(),a.end());
        ans+=a;
        return ans;
    }
};