class Solution {
public:
    int calculate(string s)
    {
        stack<int> st;
        int si=1,ans=0,p=0;
        for(int i=0;s[i];i++)
        {
            if(s[i]>='0' && s[i]<='9') p=p*10+(s[i]-'0');
            else if(s[i]=='(')
            {
                st.push(si),st.push(ans);
                si=1,ans=0;
            }
            else if(s[i]==')')
            {
                ans+=si*p,p=ans;
                ans=st.top(),st.pop();
                si=st.top(),st.pop();
            }
            else if(s[i]=='+') ans+=si*p,p=0,si=1;
            else if(s[i]=='-') ans+=si*p,p=0,si=-1;
        }
        return ans+si*p;
    }
};