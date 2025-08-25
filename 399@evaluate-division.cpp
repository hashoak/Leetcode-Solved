class Solution {
    double vaana(string &p,string &d,set<string> &v,double ans) {
        if(p==d) return ans;
        v.insert(p);
        for(auto &j:m[p]) {
            if(!v.contains(j.first)) {
                double x=vaana(j.first,d,v,ans*j.second);
                if(x!=-1) return x;
            }
        }
        return -1;
    }
public:
    map<string,vector<pair<string,double>>> m;
    set<string> c;
    vector<double> calcEquation(vector<vector<string>>& e,vector<double>& v, vector<vector<string>>& q) {
        for(int i=0;i<e.size();i++) {
            m[e[i][0]].push_back({e[i][1],v[i]});
            m[e[i][1]].push_back({e[i][0],1/v[i]});
            c.insert(e[i][0]);
            c.insert(e[i][1]);
        }
        vector<double> ans;
        for(auto &i:q) {
            set<string> v;
            if(!c.contains(i[0]) || !c.contains(i[1])) ans.push_back(-1);
            else ans.push_back(vaana(i[0],i[1],v,1));
        }
        return ans;
    }
};