class Solution {
public:
    string getPermutation(int n, int k)
    {
        string s="";
        for(int i=1;i<=n;i++) s+=to_string(i);
        vector<int> fn;
        int i=1,m=1;
        k--;
        while(k>0)
        {
            fn.insert(fn.begin(),k%i);
            k/=i,i++,m*=10;
        }
        int l=fn.size(),x=l;
        while(l>1)
        {
            s=s.substr(0,n-l)+s[n-l+fn[x-l]]+s.substr(n-l,fn[x-l])+s.substr(n-l+fn[x-l]+1);
            l-=1;
        }
        return s;
    }
};