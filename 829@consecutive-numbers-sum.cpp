class Solution {
public:
    int consecutiveNumbersSum(int n) {
        int ans=0,i=1,x=n;
        while (x/i-i/2>0) {
            ans+=!(x%i);
            i++;
            x=n+((!(i%2))*i/2);
        }
        return ans;
    }
};