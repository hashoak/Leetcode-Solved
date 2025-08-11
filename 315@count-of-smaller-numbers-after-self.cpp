class Solution {
    vector<int> ans;
    void merge(pair<int,int>* a,int s,int m,int e) {
        int i=s,j=m+1,k=0;
        pair<int,int> t[e-s+1];
        while(i<=m and j<=e) {
            if(a[i].second>a[j].second) {
                ans[a[i].first]+=(e-j+1);
                t[k]=a[i++];
            }
            else t[k]=a[j++];
            k++;
        }
        while(i<=m) t[k++]=a[i++];
        while(j<=e) t[k++]=a[j++];
        for(int x=0;x<=e-s;x++) a[s+x]=t[x];
        return;
    }

    void sort(pair<int,int>* a,int s,int e) {
        if(s>=e) return;
        int m=(s+e)/2;
        sort(a,s,m);
        sort(a,m+1,e);
        merge(a,s,m,e);
    }

public:
    vector<int> countSmaller(vector<int>& nums) {
        int l=nums.size();
        pair<int,int> m[l];
        for(int i=0;i<l;i++) m[i]=make_pair(i,nums[i]);
        ans.resize(l);
        sort(m,0,l-1);
        return ans;
    }
};