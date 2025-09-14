class Solution {
public:
    int mySqrt(int x) {
        if(x<=1) return x;
        int s=0,e=x/2,m;
        while(s<e) {
            m=s+(e-s+1)/2;
            if((long)m*m>x) e=m-1;
            else s=m;
        }
        return s;
    }
};