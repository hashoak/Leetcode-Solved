#define MOD 1000000007

class Solution {
    int* m;
    int shambo(int p,int n)
    {
        if(n==0) return 1;
        if(m[n*5+p]) return m[n*5+p];
        if(p==0) return m[n*5+p]=shambo(1,n-1);
        if(p==1) return m[n*5+p]=(shambo(0,n-1)+shambo(2,n-1))%MOD;
        if(p==2)
            return m[n*5+p]=((shambo(0,n-1)+shambo(1,n-1))%MOD+(shambo(3,n-1)+shambo(4,n-1))%MOD)%MOD;
        if(p==3) return m[n*5+p]=(shambo(2,n-1)+shambo(4,n-1))%MOD;
        if(p==4) return m[n*5+p]=shambo(0,n-1);
        return 0;
    }

public:
    int countVowelPermutation(int n) {
        m=new int[n*5];
        for(int i=0;i<5*n;i++) m[i]=0;
        int ans=0;
        n--;
        for(int i=0;i<5;i++) ans=(ans+shambo(i,n))%MOD;
        return ans;
    }
};