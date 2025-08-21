class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target)
    {
        vector<int> ans{-1,-1};
        if(nums.empty()) return ans;
        int n=nums.size(),i=0;
        if(nums[i]==target) ans[i]=i;
        for(i=0;i<n-1;i++)
        {
            if(nums[i]!=target and nums[i+1]==target) ans[0]=i+1;
            if(nums[i]==target and nums[i+1]!=target) ans[1]=i;
        }
        if(nums[i]==target && ans[0]==-1) ans[0]=i,ans[1]=i; 
        if(nums[i]==target && ans[0]!=-1) ans[1]=i;
        return ans;
    }
};