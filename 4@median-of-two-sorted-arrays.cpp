class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1,vector<int>& nums2)
    {
        int n=nums1.size(),m=nums2.size();
        int l=m+n,i=0,j=0,k,p=0,c=0;
        for(k=0;i<n && j<m && k<=l/2;k++)
        {
            p=c;
            if(nums1[i]<nums2[j]) c=nums1[i++];
            else c=nums2[j++];
        }
        while(i<n && k++<=l/2) p=c,c=nums1[i++];
        while(j<m && k++<=l/2) p=c,c=nums2[j++];
        if(l%2) return c;
        return double(p+c)/2;
    }
};