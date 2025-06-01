class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(),satisfaction.end(),greater<int>());
        int n=satisfaction.size(),s=0;
        for(int i=1;i<n;i++) satisfaction[i]+=satisfaction[i-1];
        for(int i=0;i<n && satisfaction[i]>0;i++) s+=satisfaction[i];
        return s;
    }
};