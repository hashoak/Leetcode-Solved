#define mod 1000000007

class Solution {
public:
    int numTilings(int n) {
        if(n<3) return 1+(n==2);
        int a1=1,a2=1,a3=2,a4;
        for(int i=3;i<=n;i++) {
            a4=((2*a3)%mod+a1)%mod;
            a1=a2,a2=a3,a3=a4;
        }
        return a4;
    }
};