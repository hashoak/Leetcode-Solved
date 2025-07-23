class Solution {
public:
    int countDigitOne(int n) {
        int x,t,ans=0;
        while(n>9)
        {
            x=log10(n),t=pow(10,x);
            if(n/t>1) ans+=t+(n/t)*x*pow(10,x-1);
            else ans+=(n%t+1)+(n/t)*x*pow(10,x-1);
            n=n%t;
        }
        return ans+(n>0);
    }
};