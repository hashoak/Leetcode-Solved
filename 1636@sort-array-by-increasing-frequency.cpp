class Solution {
public:
    vector<int> frequencySort(vector<int>& n) {
        map<int,int> f;
        for(auto i:n) f[i]++;
        sort(n.begin(),n.end(),[&f](int a,int b) {
                if(f[a]==f[b]) return a>b;
                return f[a]<f[b];
            }
        );
        return n;
    }
};