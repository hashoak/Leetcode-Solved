class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& p, vector<int>& h, string d) {
        int n=p.size();
        pair<int,int> pi[n];
        for(int i=0;i<n;i++) pi[i]=make_pair(p[i],i);
        sort(pi,pi+n);
        vector<int> s;
        for(int i=0;i<n;i++) {
            if(s.empty() || d[s.back()]!='R' || d[pi[i].second]!='L')
                s.push_back(pi[i].second);
            else if (h[s.back()]>h[pi[i].second])
                h[s.back()]--;
            else if (h[s.back()]<h[pi[i].second])
                s.pop_back(),
                h[pi[i].second]--,
                i--;
            else s.pop_back();
        }
        sort(s.begin(),s.end());
        for(int &i:s) i=h[i];
        return s;
    }
};