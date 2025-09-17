class Solution {
    map<string,int> m;
public:
    void malang(string f,int mul=1) {
        string e;
        int c;
        for(int i=0;i<f.length();i++)
        {
            if(f[i]=='(')
            {
                int b=1+(f[i+1]=='(');
                e="",c=0,i++;
                while(b)
                {
                    e+=f[i];
                    i++;
                    if(f[i]=='(') b++;
                    else if(f[i]==')') b--;
                }
                i++;
                while(i<f.length() && isdigit(f[i])) c=c*10+(f[i]-'0'),i++;
                c ? malang(e,c*mul):malang(e,mul);
            }
            else
            {
                e=f[i],c=0,i++;
                while(i<f.length() && islower(f[i])) e+=f[i],i++;
                while(i<f.length() && isdigit(f[i])) c=c*10+(f[i]-'0'),i++;
                c ? m[e]+=c*mul:m[e]+=mul;
            }
            if(e!="") i--;
        }
    }

    string countOfAtoms(string f) {
        malang(f);
        string ans="";
        for(auto i:m) i.second>1 ? ans+=i.first+to_string(i.second):ans+=i.first;
        return ans;
    }
};