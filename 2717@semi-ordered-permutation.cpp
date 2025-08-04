class Solution {
public:
    int semiOrderedPermutation(vector<int>& nums) {
        int n=nums.size(),s,e;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1) s=i;
            else if(nums[i]==n) e=i;
        }
        return (s+n-1-e)-(e<s);
    }
};