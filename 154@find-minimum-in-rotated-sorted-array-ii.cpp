class Solution {
public:
    int recur(vector<int>& nums,int s,int e)
    {
        if(s==e || nums[s]<nums[e]) return nums[s];
        return min(recur(nums,s,(s+e)/2),recur(nums,(s+e)/2+1,e));
    }

    int findMin(vector<int>& nums)
    {
        return recur(nums,0,nums.size()-1);
    }
};