// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int s=0,m;
        while(s<n) {
            m=s+(n-s)/2;
            if(isBadVersion(m)) n=m;
            else s=m+1;
        }
        return s;
    }
};