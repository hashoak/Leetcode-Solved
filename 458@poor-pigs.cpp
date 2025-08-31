class Solution {
public:
    int poorPigs(float b,float md,float mt) {
        return ceil(log(b)/log(mt/md+1));
    }
};