class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int b=0,s=0;
        for(int i=prices.size()-1;i>=0;i--) {
            s=max(s,b+prices[i]-fee);
            b=max(b,s-prices[i]);
        }
        return b;
    }
};