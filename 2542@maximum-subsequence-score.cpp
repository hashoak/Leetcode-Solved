class Solution {
public:
    long long maxScore(vector<int>& n1, vector<int>& n2, int k) {
        vector<pair<int,int>> v;
        for(int i=0;i<n1.size();i++) v.emplace_back(n2[i],n1[i]);
        sort(v.begin(),v.end(),greater{});
        long long s=0;
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i=0;i<k;i++) s+=v[i].second,pq.push(v[i].second);
        long long ans=s*v[k-1].first;
        for(int i=k;i<v.size();i++) {
            if(v[i].second>pq.top()) {
                s-=pq.top(),pq.pop();
                s+=v[i].second,pq.push(v[i].second);
            }
            ans=max(ans,s*v[i].first);
        }
        return ans;
    }
};