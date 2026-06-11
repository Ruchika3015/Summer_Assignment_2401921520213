class Solution {
public:
    string decodeString(string s) {
        stack<int>c;
        stack<string>st;
        string curr="";
        int n=0;
        for (char ch:s) {
            if(isdigit(ch))
            {
                n=n*10+(ch-'0');
            }
            else if(ch=='[') {
                c.push(n);
                st.push(curr);
                n=0;
                curr="";
            }
            else if (ch==']') {
                string temp=curr;
                curr=st.top(); 
                st.pop();
                int repeat=c.top();
                c.pop();
                while(repeat--) 
                curr+=temp;
            }
            else {
                curr+=ch;
            }
        }
        return curr;
    }
};
