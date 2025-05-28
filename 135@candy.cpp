class Solution {
public:
    int candy(vector<int>& r)
    {
        int n=r.size(),i=0,j,ans=0,p,pp=0,pi=-1;
        while(i<n)
        {
            while(i<n-1 && r[i]>r[i+1]) i++;
            p=1,ans+=p,j=i-1;
            while(j>=0 && r[j]>r[j+1] && pi<j) ans+=++p,j--;
            if(j>=0 && r[j]>r[j+1] && pp<=p) ans+=p+1-pp;
            p=1;
            while(i<n-1 && r[i]<r[i+1]) ans+=++p,i++;
            pp=p,pi=i;
            i++;
        }
        return ans;
    }
};