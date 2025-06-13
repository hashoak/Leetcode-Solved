class Solution {
public:
    int findPeakElement(vector<int>& n) {
        int s=0,e=n.size()-1,m;
        while(s<e) {
            m=(s+e)/2;
            if(n[m]>n[m+1]) e=m;
            else s=m+1;
        }
        return s;
    }
};

