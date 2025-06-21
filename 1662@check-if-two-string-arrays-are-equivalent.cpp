class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& w1, vector<string>& w2) {
        int i1=0,j1=0,i2=0,j2=0;
        while(i1<w1.size() && i2<w2.size())
        {
            if(w1[i1][j1]!=w2[i2][j2]) return 0;
            j1++,j2++;
            if(j1==w1[i1].length()) i1++,j1=0;
            if(j2==w2[i2].length()) i2++,j2=0;
        }
        return (i1==w1.size() && i2==w2.size());
    }
};