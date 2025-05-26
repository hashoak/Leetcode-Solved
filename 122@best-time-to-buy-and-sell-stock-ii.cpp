class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int x=prices[0],ans=0;
        for(auto i:prices) {
            if(x<i) ans+=i-x;
            x=i;
        }
        return ans;
    }
};