class Solution {
public:
    int longestOnes(vector<int>& n, int k) {
        int i=0,j=0;
        for(;j<n.size();j++) {
            if(!n[j]) k--;
            if(k<0) {
                if(!n[i]) k++;
                i++;
            }
        }
        return j-i;
    }
};