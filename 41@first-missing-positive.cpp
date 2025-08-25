class Solution {
public:
    int firstMissingPositive(vector<int>& nums)
    {
        long n=nums.size(),i=0,m=1;
        sort(nums.begin(),nums.end());
        while(i<n and nums[i]<=0) i++;
        while(i<n and nums[i]==m)
        {
            while(i<n and nums[i]==m) i++;
            m++;
        }
        return m;
    }
};