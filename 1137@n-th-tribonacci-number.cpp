class Solution {
public:
    int tribonacci(int n) {
        if(n<3) return bool(n);
        n-=2;
        int t0=0,t1=1,t2=1,t3;
        while(n--) {
            t3=t0+t1+t2;
            t0=t1,t1=t2,t2=t3;
        }
        return t3;
    }
};