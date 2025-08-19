class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<1) return 0;
        float l=log(n)/log(4);
        return l==int(l);
    }
};