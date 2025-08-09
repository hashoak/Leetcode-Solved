class Solution {
public:
    void moveZeroes(vector<int>& n) {
        int c=0;
        for(int i=0;i<n.size();i++)
            if(n[i])
                swap(n[i],n[c++]);
    }
};