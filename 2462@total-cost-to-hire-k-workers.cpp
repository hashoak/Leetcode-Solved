class Solution {
public:
    long long totalCost(vector<int>& cs, int k, int c) {
        if(cs.size()==1) return cs[0];
        priority_queue<int,vector<int>,greater<int>> a,b;
        int i=0,j=cs.size()-1;
        while(i<c && i<j) a.push(cs[i]),b.push(cs[j]),i++,j--;
        long long ans=0;
        while(k-- && i<=j) {
            if(!a.empty() && (b.empty() || a.top()<=b.top()))
                ans+=a.top(),a.pop(),a.push(cs[i++]);
            else ans+=b.top(),b.pop(),b.push(cs[j--]);
        }
        k++;
        while(k--) {
            if(!a.empty() && (b.empty() || a.top()<=b.top()))
                ans+=a.top(),a.pop();
            else ans+=b.top(),b.pop();
        }
        return ans;
    }
};