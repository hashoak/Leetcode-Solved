class Solution {
public:
    vector<string> sortPeople(vector<string>& n, vector<int>& h) {
        map<int,string,greater<int>> m;
        for(int i=0;i<n.size();i++) m[h[i]]=n[i];
        n.clear();
        for(auto i:m) n.push_back(i.second);
        return n;
    }
};