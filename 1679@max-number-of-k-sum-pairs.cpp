class Solution {
public:
    int maxOperations(vector<int>& n, int k) {
        sort(n.begin(),n.end());
        int i=0,j=n.size()-1,ans=0;
        while(i<j) {
            if(n[i]+n[j]>k) j--;
            else if(n[i]+n[j]<k) i++;
            else i++,j--,ans++;
        }
        return ans;
    }
};