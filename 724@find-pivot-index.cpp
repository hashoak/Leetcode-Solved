class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int ss=0,ps=0;
        for(int i:nums) ss+=i;
        for(int i=0;i<nums.size();i++) {
            ss-=nums[i];
            if(ss==ps) return i;
            ps+=nums[i];
        }
        return -1;
    }
};