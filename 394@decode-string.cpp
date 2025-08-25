class Solution {
public:
    void prints(stack<int> s) {
        if(s.empty()) return;
        int t=s.top();
        s.pop();
        prints(s);
        cout<<t<<"~";
        s.push(t);
    }
    void prints(stack<string> s) {
        if(s.empty()) return;
        string t=s.top();
        s.pop();
        prints(s);
        cout<<t<<"~";
        s.push(t);
    }

    string decodeString(string s) {
        stack<int> ns;
        stack<string> ss;
        int m=0;
        string ans="";
        for(int i=0;i<s.size();i++) {
            if(s[i]>='0' && s[i]<='9') m=m*10+s[i]-'0';
            else if(s[i]>='a' && s[i]<='z') ans+=s[i];
            else if(s[i]=='[') ns.push(m),m=0,ss.push(ans),ans="";
            else {
                m=ns.top();
                while(m-->0) ss.top()+=ans;
                m=0,ans=ss.top();
                ns.pop(),ss.pop();
            }
        }
        return ans;
    }
};