class Solution {
public:
    double findMaxAverage(vector<int>& n, int k) {
        double s=0;
        for(int i=0;i<k;i++) s+=n[i];
        double ans=s;
        for(int i=k;i<n.size();i++) s+=n[i]-n[i-k],ans=max(ans,s);
        return ans/k;
    }
};