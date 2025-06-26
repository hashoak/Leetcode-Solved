class Solution(object):
    def maximumScore(self, nums, k):
        i,j,m,ans,l=k,k,nums[k],nums[k],len(nums)
        while i>0 or j+1<l:
            while i>0 and nums[i-1]>=m: i-=1
            while j+1<l and nums[j+1]>=m: j+=1
            ans=max(ans,m*(j-i+1))
            if i>0 and j+1<l:
                if nums[i-1]<nums[j+1]: j+=1;m=nums[j]
                else: i-=1;m=nums[i]
            elif i==0 and j+1<l: j+=1;m=nums[j]
            elif j+1==l and i>0: i-=1;m=nums[i]
        return max(ans,m*(j-i+1))

        