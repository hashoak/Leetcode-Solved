class Solution {
public:
    vector<int> sortJumbled(vector<int>& m, vector<int>& n) {
        vector<pair<int,int>> j;
        for(int i=0;i<n.size();i++) {
            int x=n[i]/10,y=m[n[i]%10],z=10;
            while(x) {
                y+=m[x%10]*z;
                x/=10;
                z*=10;
            }
            j.push_back({y,i});
        }
        sort(j.begin(),j.end());
        vector<int> ans;
        // for(auto i:j) cout<<i.first<<" "<<i.second<<"\n";
        for(auto i:j) ans.push_back(n[i.second]);
        return ans;
    }
};