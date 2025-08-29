class Solution {
public:
    string ssum(string a,string b)
    {
        string s="";
        int cf=0,sum,x;
        int la=a.length(),lb=b.length();
        if(la<lb)
        {
            string ts=a;
            a=b,b=ts;
            int tl=la;
            la=lb,lb=tl;
        }
        for(int i=1;i<=la;i++)
        {
            if(lb>=i) x=int(b[lb-i]-'0');
            else x=0;
            sum=cf+int(a[la-i]-'0')+x;
            cf=sum/10;
            s=to_string(sum%10)+s;
        }
        if(cf) s=to_string(cf)+s;
        return s;
    }

    string multiply(string a, string b) {
        if(a=="0" || b=="0") return "0";
        string p="";
        int la=a.length(),lb=b.length();
        for(int i=1;i<=lb;i++)
        {
            string s="";
            int cf=0,sum,n1=int(b[lb-i]-'0');
            for(int j=1;j<=la;j++)
            {
                sum=cf+n1*(int(a[la-j]-'0'));
                cf=sum/10;
                s=to_string(sum%10)+s;
            }
            if(cf) s=to_string(cf)+s;
            for(int k=1;k<i;k++) s+="0";
            p=ssum(p,s);
        }
        return p;
    }
};