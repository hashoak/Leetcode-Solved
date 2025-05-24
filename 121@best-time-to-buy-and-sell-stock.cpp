class Solution {
public:
    int maxProfit(vector<int>& p)
    {
        int n=p.size();
        int ma=0,d=0;
        for(int i=n-1;i>=0;i--)
        {
            ma=max(ma,p[i]);
            d=max(d,ma-p[i]);
        }
        return d;
    }
};